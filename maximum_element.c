#include <stdio.h>

int main(){
	
	int arr[5]={25,12,38,40,45};
	int max =arr[0];
	
	for(int i=1; i<5;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		
	}
	
	printf("The Largest element is %d \n",max);
	
	
	
	
	
}
