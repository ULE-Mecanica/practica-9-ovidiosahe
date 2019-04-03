#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n,i,min,*v;
	
	printf("Dame una cantidad de numeros para comparar:\n");
	scanf("%d",&n);
	
	printf("Ahora dame los %d numeros para comparar:\n",n);
	
	v=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++){
		
		scanf("%d",&*(v+i));
	}
	
	min=*(v+0);
	
	for(i=0;i<n;i++){
		
		if(*(v+i)<min){
			
			min=*(v+i);
		}
	}
	
	printf("El numero menor es: %d",min);
	free(v);
	
	return 0;
}
