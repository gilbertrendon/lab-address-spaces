#include <stdio.h>


int main (int argc, char *argv[])
{
	if(argc<2){
		printf("Debe ingresar un parámetro: %s\n");
	}
	char *arguments[1]={"-l"};
	printf("El parámetro ingresado fue: %s\n\n",argv[1]);
  //tam = atoi(argv[i]*1000000);
  return 0;
}
