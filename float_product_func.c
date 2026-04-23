#include <stdio.h>
//Write a C function that takes an integer and a floating-point number as arguments and returns their product as a float.

float floatProdtc(int a, float b);

int main(){
	int a =5;
	float b= 3.00;
	
	float product=floatProdtc(a, b);
	printf("The Product is %f\n ",product);
	
}
float floatProdtc(int a, float b){
	return a*b;
}


