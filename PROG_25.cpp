/* autor:Oscar vivaldi partido ramirez   fecha:28/04/2022 
hacer un programa que pida el nombre de un archivo e imprima su contenido en pantalla
imprimiendo caracter por caracter 
*/
#include <stdio.h>
#include "milibreria.h"
#define MAX_BUFFER 200
int main(){
	char nombre[50],buffer[MAX_BUFFER];
	FILE *f;
	int n=0;
	leers("Nombre del archivo: ",nombre,50);
	//Abrir el archivo en modo lectura
	f=fopen(nombre,"r");
	//verificar si se abrio correctamente el archivo
	if(f==NULL){
		printf("ERROR AL TRATAR DE ABRIR EL ARCHIVO\n");
	}
	else{
		//proceso
	while(fgets(buffer,MAX_BUFFER,f)!=NULL){
		printf("%s",buffer);
		n++;
	}
		//cerrar 
		fclose(f);
		printf("\n------------------>para mostrar el archivo se hicieron %d accesos\n",n);
	}
	return 0;
}

