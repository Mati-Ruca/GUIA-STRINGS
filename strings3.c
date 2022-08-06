/*3) El usuario ingresa dos strings. Mostrar en pantalla si son iguales o no, es decir,
si tienen las mismas letras en las mismas posiciones.*/

#include <stdio.h>

int main(){
	
	char s1[20], s2[20];
	int i, f=0, cont=0, cont1=0, cont2=0;
	
	printf ("ingrese una palabra: ");//ingreso de datos
	fflush(stdin);
	fgets (s1,20,stdin);	

	
	printf ("ingrese otra palabra: ");
	fflush(stdin);
	fgets (s2,20,stdin);
	
	for (i=0 ; i<20 && f==0 ; i++){          
		if (s1[i] == '\n'){
			f=1;
		}
		else{
			cont1++;
		}
	}
	
	f=0;                                         //} se cuenta la cantidad de letras de cada palabra.
	
	for (i=0 ; i<20 && f==0 ; i++){
		if (s2[i] == '\n'){
			f=1;
		}
		else{
			cont2++;
		}
	}
	
	if (cont1 != cont2){ //si las palabras tienen una diferente cantidad de letras se determina que son diferentes y termina el programa.
		printf ("las palabras son diferentes.");
		return 0;
	}
	
	f=0;
	
	for(i=0;i<cont1;i++){  //se detecta si alguna letra de las dos palabras es diferente. En caso de serlo, se activa una flag.
        if(s1[i]!=s2[i])
            f = 1;
    }
	
	if (f == 0){  //si la flag no se activo, significa que ambos strings son iguales. Si es diferente de 0 significara que son diferentes.
		printf ("las palabras son iguales.");
	}
	else{
		printf ("las palabras son diferentes.");
	}
	
	
	return 0;
}
