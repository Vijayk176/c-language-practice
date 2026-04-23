#include <stdio.h>

int main(){
	
	int n;
	printf("Enter the Number: ");
	scanf("%d",&n);
	int a=1;
	int b=1;
	int sum;
	for(int i=1;i<=n-2;i++){
		sum=a+b;
		a=b;
		b=sum;
		printf("The First fibonaci Number %d is %d\n",i,sum);
	}
	

} 
