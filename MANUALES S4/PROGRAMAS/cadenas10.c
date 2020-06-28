#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
	int z, x;
	int res;
    char cad1[]="     ";
	char cad2[]="     ";
	char mayor[]="la palabra 1 es menor";
	char igual[]="las palabras son iguales";
	
	printf("Ingresa la palabra 1: ");
	gets(cad1);
	printf("Ingresa la palabra 2: ");
	gets(cad2);
	
	res=strcmp(cad1, cad2);
	printf("%d\n", res);
	
	printf("%s : %d", (z=res ? mayor: igual),(x=res ? 1:0));
	printf("\n");
	
	return 0;
}
