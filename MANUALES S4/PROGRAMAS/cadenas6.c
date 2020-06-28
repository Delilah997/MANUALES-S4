#include <stdio.h>
#include <string.h>
int main (){
	char antes[]="antes";
	char despues[]="despues";
	char nuevo[]="nueva cadena";
	puts("Ingresa una palabra: ");
	scanf("%s", &antes);
	puts("Ingresa otra palabra: ");
	scanf("%s", &despues);
	strcpy(nuevo, antes);
	strcpy(antes, despues);
	strcpy(despues, antes);
	strcpy(antes, despues);
	
	printf("despues: %s\n antes: %s", despues,nuevo);
	return 0;
}
