#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
    char cad1[]=" ";
	char copia[]=" ";
	int i, j, len, con=0, cont=0;

	puts("Ingresa una palabra: ");
	gets(cad1);
	len=strlen(cad1);
	strcpy(copia,cad1);
	int repet[len+1];
	for(i=len;i>=0;i--){
		for(j=len;j>=0;j--){
			if(cad1[i]==copia[j]){
				con+=1;
			}
			if(cad1[i]==copia[j] && i>j){
				con=0;
			}
		}
		repet[i]=con;
		con=0;
	}
	for(i=0;i<len;i++){
		if(repet[i]>0){
			printf("%c : %d\n",copia[i], repet[i]);
		}
	}
    printf("\n");	
	return 0;
}
