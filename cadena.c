#include<stdio.h>
#include<stdlib.h>

void quitaespacios(char *cadena, char *cadenasinesp);

int main()
{
	char *cad,*cadsinesp,vaciar;
	int numcaracteres;

	printf("Indique cuantos caracteres tiene la cadena:\n ");
	scanf("%d*c",&numcaracteres);

	cad=(char*)malloc(sizeof(char)*numcaracteres);	
	cadsinesp=(char*)malloc(sizeof(char)*numcaracteres);	
	
	printf("Introduzca la cadena:\n ");

    while ((vaciar = getchar()) != EOF && vaciar != '\n');
    
    fgets(cad, numcaracteres-1,stdin);
	
	quitaespacios(cad,cadsinesp);
	
	printf("La cadena es %s",cadsinesp);	
	
	free (cad);
	free (cadsinesp);
	return 0;
}

void quitaespacios(char *cadena, char *cadenasinesp)
{
	int i=0,j=0;

	while (*(cadena+i)!='\0') {
		if(*(cadena+i)!=' ')
		{
			*(cadenasinesp+j)=*(cadena+i);
			j++;
		}
		i++;
	}
    return;
}
