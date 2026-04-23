#include <stdio.h>

int maxNumber(int *a,int*b);
int main(){
	int a=5;
	int b=10;
	
	int maxnumber=maxNumber(&a,&b);
	printf("Maximun Number  %d \n",maxnumber );
	
	
}

int maxNumber(int*a,int*b){
	if(*a>*b){
		return *a;
	}else{
		return *b;
	}
}
