/*1) Permitir que el usuario ingrese una palabra de hasta 20 letras. Mostrar en pantalla cuántas letras tiene la palabra ingresada.
Por ejemplo "CASA" debe indicar 4 letras.*/

#include <stdio.h>

char correccion(char *palabra);

int main(){
	char palabra[20];
	int i, cont = 0, f = 0;
	
	printf("ingrese una palabra (20 letras maximo): ");
	fflush(stdin);
	fgets(palabra,20,stdin);
	correccion(&palabra);
	
	for (i=0 ; i<20 && f==0 ; i++){
		if (palabra[i] == '\0'){
			f=1;
		}
		else{
			cont++;
		}
	}
	
	printf ("la palabra %s tiene %d letras.",palabra,cont);
	
	
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