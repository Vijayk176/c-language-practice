#include <stdio.h>

int main(){
	
	 float price[3];
	 
	printf("Enter the price for item 1: ");
    scanf("%f", &price[0]);

    printf("Enter the price for item 2: ");
    scanf("%f", &price[1]);

    printf("Enter the price for item 3: ");
    scanf("%f", &price[2]);
	 
	 printf("Total price1 :%f\n",  price[0]+(0.18 * price[0]));
	 printf("Total price2 :%f\n",  price[1]+(0.18 * price[1]));
	 printf("Total price3 :%f\n",  price[2]+(0.18 * price[2]));
}
