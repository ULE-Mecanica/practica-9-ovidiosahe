//pide dos cadenas, compara su tamaño, si es igual mensaje, sino, copia la segunda en la primera.
#include<stdio.h>
#include<string.h>

int main(){
	
	int x,y;
	char cadena1[20],cadena2[20];
	
	printf("Dame dos palabras\n");
	scanf("%s",cadena1);
	scanf("%s",cadena2);
	
	x=strlen(cadena1);
	y=strlen(cadena2);
	
	printf("La cadena %s tiene %i caracteres\n",cadena1,x);
	printf("La cadena %s tiene %i caracteres\n",cadena2,y);
	
	if(x==y){

		printf("Tienen el mismo tamaño\n");
		printf("Comparacion con strcmp: %d\n",strcmp(cadena1,cadena2));
		
		if(strcmp(cadena1,cadena2)==0){
			printf("Son iguales\n");
		}
		else{
			
			strcpy(cadena1,cadena2);
			printf("La segunda cadena se copiara en la primera\n");
			printf("%s",cadena1);
		}
	}
	return 0;
}

