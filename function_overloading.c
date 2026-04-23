#include <stdio.h>
int sumFunc(int a, int b);
float addFunc(float x, float y);



int main(){
	int a=5;
	int b=10;
	
	float x=15;
	float y=20;
	
	int sum= sumFunc(a,b);
	printf("The sum is %d\n ",sum);
	float add= addFunc(x,y);
	printf("The sum is %.2f\n ",add);
	
}

int sumFunc(int a, int b){
	return a+b;
}

float addFunc(float x, float y){
	return x+y;
}

