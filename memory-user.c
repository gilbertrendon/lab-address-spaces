#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main (int argc, char *argv[])
{
	clock_t cl = clock();//Variable para cuando se ingrese el tiempo y debe ser en segundos
		//printf("%ld\n",clock());
	if(argc<2){
		printf("Debe ingresar un parámetro para el tamaño.");
	}
	else
	 if (argc == 2) {
	// Solo tamaño
	int tam = atoi(argv[1]);
	tam *= 1e6;
	int *p = malloc(tam);
		while(1) {
			for(int i = 0; i < tam/sizeof(int);i++) {
				*(p + i) = 0;
				printf("%d\n",i);
					}
				}
	}else {
	//Parte donde se emplea el segundo argumento en segundos
		if(argc == 3){
		// Solo tamaño
		int tam = atoi(argv[1]);
		tam *= 1e6;
		//printf("Tamaño: %d\n", tam);
		int *p = malloc(tam);
		while ((clock() - cl)/CLOCKS_PER_SEC < atoi(argv[2])){
			for(int i = 0; i < tam/sizeof(int);i++) {
				*(p + i) = 0;
				printf("%d\n",i);
					}
				}
		}else{
		printf("Debe ingresar un parámetro para el tamaño y otro para el tiempo(en segundos):");
		}
}
   //char *arguments[1]={"-l"};	
   //printf("El parámetro ingresado fue: %s\n\n",argv[1]);
  //tam = atoi(argv[i]*1000000);
  return 0;
}






