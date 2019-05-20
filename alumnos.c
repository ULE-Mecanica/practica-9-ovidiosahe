#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int f,c,*m,i,j;
	float sumatotal=0,mediatotal,suma,media;
	
	printf("Introduce el numero de alumnos\n");
	scanf("%d",&f);
	printf("Introduce el numero de examenes\n");
	scanf("%d",&c);
	
	m=(int*)malloc(sizeof(int)*f*c);
	
	printf("Introduzca las notas de cada alumno\n");

	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			scanf("%d",&*(m+i*c+j));
		}
	}
	
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("%d\t",*(m+i*c+j));	
		}
		printf("\n");
	}
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			sumatotal+=*(m+i*c+j);
		}
	}
	mediatotal=sumatotal/(f*c);
	
	printf("La media de todas las notas es %f\n",mediatotal);
	
	for(i=0;i<f;i++){
		suma=0;
		for(j=0;j<c;j++){
			suma+=*(m+i*c+j);
		}
		media=suma/c;
		printf("La media del alumno %d es %f",i,media);
	}
	
	return 0;
}
