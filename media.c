#include<stdio.h>
#include<stdlib.h>

int media(int *v,int num);

int main(){
	
	int *vec,n,i;
	
	printf("Introduce el numero de elementos a hacer la media:\n");
	scanf("%d",&n);
	
	vec=(int*)malloc(sizeof(int)*n);

	printf("Introduce los elementos para calcular la media:\n");
	for(i=0;i<n;i++){
		scanf("%d",&*(vec+i));
	}
		
	media(vec,n);
	
	printf("La media es: %d",media(vec,n));
	
	free(vec);
	
	return 0;
}

int media(int *v,int num){
	
	int x=0,y,i;
	
	for(i=0;i<num;i++){
		x+=*(v+i);
	}
	y=x/num;
	
	return y;
}
