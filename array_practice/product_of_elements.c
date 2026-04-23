int main(){
	int n;
	printf("Enter the Size of arr: ");
	scanf("%d",&n);
	int product=1;
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("Enter The element %d: ",i+1);
		scanf("%d",&arr[i]);
		product=product*arr[i];
	}
	printf("Product of elements is %d: ",product);
	
}
