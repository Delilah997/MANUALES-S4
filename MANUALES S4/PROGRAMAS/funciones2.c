#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
	int x, y;
	int mayor;
	printf("Ingrese el numero 1: ");
	scanf("%d",&x);
	printf("Ingrese el numero 2: ");
	scanf("%d",&y);
	mayor= maximo(x,y);
	return 0;
}	
int maximo(int x, int y){
	int mayor;
	if(x>y){
		mayor=x;
	}else{
		mayor=y;
		printf("el numero mayor es: %d",mayor);
	}
	return mayor;
}
