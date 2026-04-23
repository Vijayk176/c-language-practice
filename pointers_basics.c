#include <stdio.h>

int main(){
	int x;
	int *ptr;
	
	ptr=&x;
	*ptr=500;
	
	printf("Value of x=%d\n",x);
	
	printf("Value of *ptr =%d\n",*ptr);
	
	*ptr+=5;
	
	printf("Value of x=%d\n",x);
	
	printf("Value of *ptr =%d\n",*ptr);
	
	(*ptr)++;
	printf("Value of x=%d\n",x);
	
	printf("Value of *ptr =%d\n",*ptr);
}
