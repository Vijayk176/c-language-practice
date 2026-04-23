#include <stdio.h>

//1. Write a program in C to store elements in an array and print them.
//Elements in array are: 1 1 2 3 4 5 6 7 8 9

int main(){
	
	int marks[10];
	for(int i=0;i<10;i++){
		printf("Enter The Marks %d: ",i+1);
		scanf("%d",&marks[i]);
		
	}
	for(int i=0; i<10; i++){
		if(marks[i]<35){
			printf("%d",marks[i]);
		}
		
	}
	
	return 0;
}
