#include <stdio.h>

int main(){
	int a,b;
	int value=1;
	printf("Enter the first Number: ");
	scanf("%d",&a);
	printf("Enter the second Number: ");
	scanf("%d",&b);
	for(int i=1;i<=b;i++){
	value=value*a;
	printf("Number is %d and power is %d =%d\n",a,i,value);
	
}	
	
}
