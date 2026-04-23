#include<stdio.h>
int main(){
	int n;
	printf("Enter the Size of arr: ");
	scanf("%d",&n);
	int sum=0;
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter The element %d: ",i+1);
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	printf("Sum of elements is %d: ",sum);
	
}
