#include <stdio.h>

//1. Write a program in C to store elements in an array and print them.
//Elements in array are: 1 1 2 3 4 5 6 7 8 9

int main(){
	int arr[6];
	for(int i=0; i<6;i++){
		printf("Enter the Element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=0; i<6; i++){
		printf("%d ",arr[i]);
		
	}
	printf("\n");
	return 0;
}
