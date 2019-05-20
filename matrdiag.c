#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int f,c,*m,i,j;
			
	printf("Introduzca las filas de la matriz:\n");
	scanf("%d",&f);
	printf("Introduzca las columnas de la matriz:\n");
	scanf("%d",&c);
	
	m=(int*)malloc(sizeof(int)*f*c);
	
	printf("La matriz es:\n");

	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			if(i==j){
				*(m+i*c+j)=i*j;				
			}
			else{
				*(m+i*c+j)=i-j;
			}
		}
	}
		
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("%d\t",*(m+i*c+j));
		}
		printf("\n\n");
	}
	
	free(m);
	
	return 0;
}

