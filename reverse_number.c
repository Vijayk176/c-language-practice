#include <stdio.h>

int main(){
	
	int n;
	printf("Enter the Number: ");
	scanf("%d",&n);
	
	int digitCount=0;
	int reverse=0;
	int sum=0
	while(n>0){
		digitCount=n%10;
		reverse=reverse*10+digitCount;
		n=n/10;
		
}
printf("%d\n",reverse);

}
