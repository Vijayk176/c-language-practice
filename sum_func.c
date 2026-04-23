#include <stdio.h>

int sumFunc(int a, int b);


int main(){
	int a=5;
	int b=6;
	
int	result= sumFunc(a,b);

printf("The Sum Of %d and %d is %d: ",a,b,result);
	
}

int sumFunc(int a, int b){	
	 return a+b;

}
