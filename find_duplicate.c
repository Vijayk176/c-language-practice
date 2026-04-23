#include <stdio.h>

int main(){
	
	int arr[5]={1,2,3,4,4};
	
	int duplicate=arr[0];
	
	for(int i=0;i<5;i++){
		if(arr[i]==duplicate){
			duplicate=arr[i];
			
		}
	}

	printf("The Duplicate is %d\n",duplicate);
	
}
