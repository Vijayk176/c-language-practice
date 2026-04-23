#include<stdio.h>

int main(){
int n;
printf("Enter The Number: ");
scanf("%d",&n);

int count=0;
int sum=0;
	while(n!=0){
		count=n%10;
		sum=sum+count;
		n=n/10;
}
printf("The Sum Is %d",sum);


	
	
}
