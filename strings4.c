//4) El usuario ingresa una palabra. Mostrar en pantalla cuántas letras A minúsculas contiene.


#include <stdio.h>

char correccion(char *palabra);

int main(){
	
	int i,cont=0;
	
	char palabra[20];

	printf("ingrese una palabra (20 letras maximo): ");
	fflush(stdin);
	fgets(palabra,20,stdin);
	correccion(&palabra);

	for (i=0 ; i<20 && palabra[i] != '\0' ; i++){
		if (palabra[i] == 'a'){
			cont++;
		}
	}
	
	
	printf("la palabra %s tiene",palabra);
	
	if (cont == 1){
		printf(" 1 letra A minuscula.");
	}
	else{
		printf(" %d letras A minusculas.",cont);
	}
	
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