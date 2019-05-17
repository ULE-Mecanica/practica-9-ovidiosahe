#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,j,*m,x=1;
	
	m=(int*)malloc(sizeof(int)*10*10);
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			*(m+i*10+j)=x;
			x++;
		}
	}
	printf("La matriz es:\n");
	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			printf("%d\t",*(m+i*10+j));
		}
		printf("\n");
	}
}
