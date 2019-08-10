1. El comando free muestra la cantidad total de memoria de intercambio y uso físico y gratuito
memoria en el sistema(swap space por ejemplo), así como los búferes y cachés utilizados por el núcleo. La información se recopila analizando / proc / meminfo.

2.  free -m muestra las siguientes columnas:
total        used        free      shared  buff/cache   available

	total: Esta columna indica la memoria total.

	used: Esta columna indica la memoria ocupada, pero se refiere principalmente a memoria en el swap space o memorias que no se             encargan de grandes cantidades de información.

	free: Esta columna indica la memoria libre, pero se refiere principalmente a memoria en el swap space o memorias que no se               encargan de grandes cantidades de información.

	shared: Es la memoria compartida usada en sistemas tmpfs que funcionan con memorias volátiles.
	
	buff/cache: Esto indica la memoria de bufering y caché que requieren los procesos que se ejecutan en el momento, suele ser en           ocasiones bastante.
	
	available: Esta columna indica la memoria disponible total del sistema.

3. Programa

4.  ¿Cómo cambia el uso total de memoria cuando su programa está corriendo?

    R// Usando el comando kill(para terminar el proceso memory-user) en general las únicas columnas en las que se percibe cambio es en used, porque cuando se está ejecutando el código esta aumenta a comparación de cuando no,
	la columna free aumenta cuando no se está ejecutando el código,	
	la columna shared disminuye cuando se está ejecutando el código.
	El uso de caché no se altera en gran medida pero disminuye un poco.
	Finalmente la memoria disponible, lógicamente aumenta cuando no se está ejecutando el código.

5. El pmap se puede ejecutar para un solo proceso en particular o para varios, muestra en general información más detallada de cada proceso, muestra incluso direcciones en memoria y con este comando se puede ver la locacalización de cada componente(archivo, librería, etc.) que usa el proceso.

6. Va junto con el 7(osea el siguiente).
7. ¿Cuántas entidades diferentes conforman un espacio de direcciones moderno, a diferencia de nuestra simple concepción de code/stack/heap?

Con -x podemos ver el como está mapeado el nombre de archivo, ejecutable, etc. Asociado al proceso que se está analizando, con -p se ve la ruta exacta del archivo que mencionábamos anteriormente cuando ejecutabamos el comando -x, finalmente excisten alternativas como -d por ejemplo y aquí la salida producida permite ver una nueva columna 'dispositivo' que se agrega en la salida, con -q si no quieres ver cosas como nombres de columna en la salida de pmap y en general cada diferente comando depende de lo que se quiera ver.

8 - Finalmente, se ejecuta pmap para el programa memory-user, con diferentes cantidades de memoria usada:

Debido a lo que describimos en los puntos anteriores se asumió que si poníamos valores que requirieran menos memoria, osea tiempos mas cortos(que era el parámetro que podíamos modificar junto con el espacio) pero principalmente al modificar el tamaño a más corto, se esperaba que cuando el sitema con el comando pmap mostrara la memoria usada, se mostraran más operaciones para el proceso memory-user y efectivamente así fue debido a que vimos más filas para el proceso memory-user.

Anotaciones de interés:

malloc- para reservar memoria en el heap
ejm: int *A_heap = malloc(4*4);//reservando 4 enteros 16 bytes(un vector donde cada posición tiene 4 bites)
//4*4 es lo mismo que 4*sizeof(int)










