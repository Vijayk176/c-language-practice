#include <stdio.h>

int main(){
	
	int n;
	printf("Enter the Number: ");
	scanf("%d",&n);
	
	int digitCount=0;
	int sum=0;
	while(n!=0){
		digitCount=n%10;
		if(digitCount%2==0)
		sum=sum+digitCount;
		n=n/10;
	}
	printf("%d\n",sum);
		
}
