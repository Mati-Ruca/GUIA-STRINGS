/*9) El usuario ingresará una palabra de hasta 10 letras. Se desea mostrarla en pantalla pero encriptada según el "Código César".
Esto consiste en reemplazar cada letra con la tercera consecutiva en el abecedario. Por ejemplo, "CASA" se convierte en "FDVD".
Tener en cuenta que las últimas letras deben volver al inicio, por ejemplo la Y se convierte B.
Este mecanismo se utilizaba en el Imperio Romano.*/

#include <stdio.h>
#include <string.h>

char correccion(char *palabra);

int main(){
	
	int i, j;
	
	char abc[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char palabra[10];
	
	
	printf("ingrese una palabra (10 letras maximo): ");
	fflush(stdin);
	fgets(palabra,10,stdin);
	correccion(&palabra);
	
	char codificada[strlen(palabra)];
	
	for (i=0 ; i<strlen(palabra) ; i++){
		for (j=0 ; j<26 ; j++){
			if (palabra[i] == abc[j]){
				if (3+j >= 26){
					codificada[i] = abc[j-23];	
				}
				else{
					codificada[i] = abc[j+3];
				}
			}
		}
	}
	
	
	printf("%s\n",palabra);
	printf("%s",codificada);
	
	return 0;
}

char correccion(char *palabra){
	
	for (int i=0 ; i<20 ; i++){
		if (palabra[i] == '\n'){
			palabra[i] = '\0';
		}
	}
	return (palabra);
}