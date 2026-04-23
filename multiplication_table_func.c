#include <stdio.h>

//funtion prototype

int multtable();

int main(){

 multtable();
 multtable();
 multtable();
 multtable();
	
	return 0;
}

//funtion defination

int multtable(){
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(int i=1; i<=10; i++){
		printf("%d x %d = %d\n", n, i, i*n);
	}
	
	return 0;
}
