#include <stdio.h>
#include <string.h>
int main (){
	int len;
	int i=0;
	int j=0;
	char cad[]=" ";
	printf("Ingresa la palabra 1: \n");
	gets(cad);
	len=strlen(cad);
	printf("La longitud de \%s es: %d\n",cad,len);
	puts("\n");
	for (i=0;i<len;i++){
		for (j=0;j<len;j++){
			printf("* *");
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
