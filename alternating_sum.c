#include <stdio.h>

int main(){
	
	int n;
	printf("Enter the Number: ");
	scanf("%d",&n);
	int sum;
	for(int i=1;i<=n;i++){
		if(i%2!=0){
			sum=+i;
		}else{
			sum=sum-i;
		}
	}
printf("%d",sum);
}
