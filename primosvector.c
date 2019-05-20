#include<stdio.h>
#include<stdlib.h>

int dameprimo(int n);
int esprimo(int n);

int main(){
	
	int i,*v,k=1,p;
	
	printf("Introduce la cantidad de numeros primos:\n");
	scanf("%d",&p);
	
	v=(int*)malloc(sizeof(int)*p);
	
	for(i=0;i<p;i++){
		k=dameprimo(k);
		*(v+i)=k;
	}
	printf("El vector es:\n");
	
	for(i=0;i<p;i++){
		printf("%d\t",*(v+i));
	}
	free(v);
	
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
