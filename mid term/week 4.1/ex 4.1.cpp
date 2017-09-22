#include<stdio.h>

int toDecimal(int);
int main(){
	int binary,decimal;
	
	printf("Enter a binary(1-8 digits) : ");
	scanf("%d",&binary);
	decimal = toDecimal(binary);
	printf("Decimal = %d",decimal);
	return 0;
}
int toDecimal(int n){
	int dec = 0,base = 1;
	while(n > 0){
		dec = dec +(n%10)*base;
		base*=2;
		n/=10;
	}
	return dec;
}		
