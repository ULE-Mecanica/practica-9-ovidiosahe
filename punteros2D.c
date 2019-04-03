#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int fil,col,*mat,i,j,x=0;
	
	printf("Introduzca el numero de filas:\n");
	scanf("%d",&fil);
	
	printf("Introduzca el numero de columnas:\n");
	scanf("%d",&col);
		
	mat=(int*)malloc(fil*col*sizeof(int));
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){

			printf("Introduzca el valor %d %d de la matriz:\n",i,j);
			scanf("%d",&*(mat+fil*i+j));
			
		}
	}
	printf("La matriz es:\n");
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			x+=*(mat+fil*i+j);
			printf("%d\t",*(mat+fil*i+j));
		}
		printf("\n");
	}
	
	printf("La suma vale: %d",x);

	free(mat);
	
	return 0;
}
