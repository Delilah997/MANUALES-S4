#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float obtenerArea(int a, int b, int c);
int main (){
	float a, b, c;
	int i;
	float area;
	printf("Ingresa el valor del lado 1 del trangulo: ");
	sacanf("%f",&a);
	printf("Ingresa el valor del lado 2 del trangulo: ");
	sacanf("%f",&b);
	printf("Ingresa el valor del lado 3 del trangulo: ");
	sacanf("%f",&c);
	area=obtenerArea(a, b, c);
	printf("Area del triangulo: %f\n",area);
	
	return 0;
}
	float obtenerArea(int a, int b, int c){
	float p=((a+b+c)/2);
	float area=sqrt((p*(p-a)*(p-b)*(p-c)));
	return area;
}
