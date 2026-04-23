#include <stdio.h>

int main(){
	
	int n;
	printf("Enter the Number: ");
	scanf("%d",&n);
	int fict=1;
	for(int i=1;i<=n;i++){
		fict=fict*i;
		printf("The fictorial of %d is %d\n",i,fict);
	}

} 
