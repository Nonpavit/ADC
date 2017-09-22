#include<stdio.h>

int toBinary(int);
int main(){
	
	int binary=0,decimal;
	
	printf("Enter a decimal(0-255) : ");
	scanf("%d",&decimal);
	binary = toBinary(decimal);
	printf("Binary = %d",binary);
	return 0;
}
int toBinary(int n){
	int bin = 0,base = 1;
	while(n > 0){
		bin = bin +(n % 2)*base;
		base*=10;
		n/=2;
	}
	return bin;
}		
