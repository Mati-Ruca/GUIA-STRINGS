/*2) Permitir el ingreso de una palabra y mostrarla en pantalla al revés.
Por ejemplo, para "CASA" se debe mostrar "ASAC".*/


#include <stdio.h>


int main(){
	
	char palabra[20], reves[20];
	int i, cont = 0, f = 0, j;
	
	printf("ingrese una palabra (20 letras maximo): ");
	fflush(stdin);
	fgets(palabra,20,stdin);
	
	for (i=0 ; i<20 && f==0 ; i++){
		if (palabra[i] == '\n'){
			f=1;
		}
		else{
			cont++;
		}
	}
	
	for (i=cont ; i>=0 ; i--){
		printf ("%c",palabra[i]);
	}
	
	
	
}