#include <stdio.h>

int largFunc(int a, int b, int c);

int main(){
	int a=10;
	int b=5;
	int c=15;
	
int largest= largFunc(a,b,c);
printf("The Largest Number is: %d\n",largest);
	
}

int largFunc(int a,int b,int c){
	if(a>b && a>c){
		return a;
	}else if(b>a&& b>c){
		return b;
	}
	else{
		return c;
	}
}
