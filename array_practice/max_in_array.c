#include<stdio.h>
int main(){
	
int max=-1;

int arr[5]={20,33,43,55,21};

for(int i=0;i<5;i++){
	if(max<arr[i]){
		max=arr[i];
	}
	
}
printf("The Max number is %d: ",max);
}
