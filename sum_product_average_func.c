#include <stdio.h>
int spaFunc(int a, int b, int *sum, int *product, int *average);
int main(){
	
	int a=5;
	int b=3;
	
	int sum, product,average;
	spaFunc(a,b,&sum,&product,&average);
	
	printf("Sum=%d, Product=%d, Average=%d",sum,product,average);
	
	}

int spaFunc(int a, int b, int *sum, int *product, int *average){
	*sum=a+b;
	*product=a*b;
	*average=(a+b)/2;
}

