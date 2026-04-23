#include <stdio.h>

float float_point(float n);

int main(){
float n=5.000;

float square= float_point(n);

printf("Square of number %.2f is %.2f: ",n,square);

}

float float_point(float n){
	return n*n;
}
