#include <stdio.h>

int main(){
	
	int total=0;
	int grade=1;
	while(grade<=10){
		printf("Enter Your Grade: ");
		int n=0;
		scanf("%d",&n);
		total=total+grade;
		grade=grade+1;
		
	}
	int average=total/10;
	printf("Class average is %d\n",average);
}
