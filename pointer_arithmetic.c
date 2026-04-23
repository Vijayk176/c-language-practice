#include <stdio.h>

int main(){
	//Case 1
	int age=22;
	int *ptr=&age;
	printf("ptr = %d\n",ptr);//Will Show actual Value 
	ptr++;
	printf("ptr = %d\n",ptr);//Will Show Actual +2
	ptr--;
	printf("ptr = %d\n",ptr);//Will Show Actual 
	
	
	//Case 2
	float price=20.00;
	float *ptr1=&price;
	ptr1++;
	
	//Case 3
	
	char star="*";
	char *ptr2= &ptr;
	ptr2++;
}
