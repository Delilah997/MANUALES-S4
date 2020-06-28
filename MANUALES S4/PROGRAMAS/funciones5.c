#include <stdio.h>
#include <stdlib.h>
int main (){
	int x;
	double factorial;
	printf("Ingresa un numero: ");
	scanf("%d", &x);
	factorial=recursividad(x);
	printf("%d!=%1.1f",x, factorial);
	return 0;
   
   double recursividad(int x){
   	if(x==0){
   		return 1;
	   }else{
	   	return (x*recursividad(x-1));
	   }
    }
}
