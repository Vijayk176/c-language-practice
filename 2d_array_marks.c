#include <stdio.h>

//We are gona create 2D array, suppose we are storeing marks of 2 students of 3 subjects; 



int main(){
	int marks[2][3]; //|---|---|
	
	marks[0][0]=90;  //first student's first subject marks//(0)is zero index and 0 index=1.
	marks[0][1]=89;  //first student's second subject marks//(1)is 1 index and 1 index=2.
	marks[0][2]=79;  //first student's third subject marks//(2)is 2 index and 2 index=3.
	
	
	marks[1][0]=80;  //Second student's first subject marks//(0)is zero index and 0 index=1.
	marks[1][1]=69;  //second student's second subject marks//(1)is 1 index and 1 index=2.
	marks[1][2]=59;  //second student's third subject marks//(2)is 2 index and 2 index=3.
	
	
	
	printf("First Subject = %d, Second Subject = %d, Third Subject = %d\n",marks[0][0],marks[0][1],marks[0][2]);
	printf("First Subject = %d, Second Subject = %d, Third Subject = %d\n",marks[1][0],marks[1][1],marks[1][2]);
	
	
	
}
