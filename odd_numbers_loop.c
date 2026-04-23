#include<stdio.h>

int main(){
	int n;
	printf("Enter The Number: ");
	scanf("%d",&n);
	for(int i=1; i<=n; i++){
		if(i%2!=0){
			printf("The number is odd %d\n",i);
		}
	}
	
	
	
	return 0;
}
