#include<stdio.h>
#include<stdlib.h>

int dameprimo(int n);
int esprimo(int n);

int main(){
	
	int f,c,*m,i,j,k=1;
	
	printf("Introduzca el numero de filas:\n");
	scanf("%d",&f);
	
	printf("Introduzca el numero de columnas:\n");
	scanf("%d",&c);
		
	m=(int*)malloc(f*c*sizeof(int));
	
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			k=dameprimo(k);
			*(m+i*c+j)=k;
		}
	}
	printf("La matriz es:\n");
	
	for(i=0;i<f;i++){
		for(j=0;j<c;j++){
			printf("%d\t",*(m+i*c+j));
		}
		printf("\n");
	}
	
	free(m);
	return 0;
	}
	
	int dameprimo(int n){
		n++;
		if(!esprimo(n)){
			n++;
		}
		return n;
	}
	
	int esprimo(int n){
		int i;
		for(i=2;i<n;i++){
			if(n%i==0){
				return 0;
			}
			return n;
		}
	}
		
		
		
		
		
		
		
		
		
		
		
		
		
			
