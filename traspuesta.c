#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j,n,*m,aux;
	
	printf("Introduzca el numero de filas y columnas\n");
	scanf("%d",&n);
	
	m=(int*)malloc(sizeof(int)*n*n);
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("Introduzca el valor %d %d de la matriz\n",i,j);
			scanf("%d",&*(m+i*n+j));
		}
	}
	printf("La matriz es\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",*(m+i*n+j));
		}
		printf("\n");
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			aux=*(m+i*n+j);
			*(m+i*n+j)=*(m+j*n+i);
			*(m+j*n+i)=aux;
		}
	}
	printf("La matriz traspuesta es\n");
	
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d\t",*(m+j*n+i));
		}
		printf("\n");
	}
	
	free(m);
	return 0;
}
