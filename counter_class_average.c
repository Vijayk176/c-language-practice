#include<stdio.h>

int main(){
	int total=0;
	int counter=0;
	int grade=0;
	
	
	printf("Enter The Grade -1 to end the program: ");
	scanf("%d",&grade);
	while(grade!=0){
		
		total=total+grade;
		counter=counter+1;
		
		printf("Enter The Grade -1 to end the program: ");
	    scanf("%d",&grade);
		
	}
	if(counter!=0){
		
		double average= (double)total/counter;
		printf("Class average is %2f\n",average);
	}
	else {
	 printf("No grades were entered"); 
    } 

}
