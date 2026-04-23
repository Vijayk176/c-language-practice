#include <stdio.h>

int main(){
	
	int arr[6]={2,3,4,4,9,8};
	int count=0;
	int target=4;
	for(int i=0;i<6;i++){
		if(arr[i]==target){
		
			count++;
		}
		
	}
	printf("%d",count);
	
	
	
}
