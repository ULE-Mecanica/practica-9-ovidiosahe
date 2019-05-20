#include<stdio.h>
#include<stdlib.h>

void rellena(int fil,int col,int *mat);
void imprime(int fil,int col,int *mat);

int main(){
	
	int f,c,*m;
		
	printf("Introduzca las filas de la matriz:\n");
	scanf("%d",&f);
	printf("Introduzca las columnas de la matriz:\n");
	scanf("%d",&c);
	
	m=(int*)malloc(sizeof(int)*f*c);
	
	rellena(f,c,m);
	
	imprime(f,c,m);
	
	free(m);
	
	return 0;
}

void rellena(int fil,int col,int *mat){
	
	int i,j,num=0;
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			*(mat+i*col+j)=num;
			num+=2;
			
		}
	}
	return;
}

void imprime(int fil,int col,int *mat){
	
	int i,j;
	
	printf("La matriz es:\n");
	
	for(i=0;i<fil;i++){
		for(j=0;j<col;j++){
			printf("%d\t",*(mat+i*col+j));
		}
		printf("\n");
	}
	return;
}

