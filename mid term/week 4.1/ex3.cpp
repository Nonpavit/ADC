#include<stdio.h>

int toDecimal(int);
int toBinary(int);
int main(){
	int binary1,binary2,decimal1,decimal2,sum,sum2;
	
	printf("Enter the first binary (1-8 digits) : ");
	scanf("%d",&binary1);
	printf("Enter the second binary (1-8 digits) : ");
	scanf("%d",&binary2);
	decimal1 = toDecimal(binary1);
	decimal2 = toDecimal(binary2);
	sum = decimal1+decimal2;
	sum2 = toBinary(sum);
	printf("%d + %d = %d",binary1,binary2,sum2);
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
int toBinary(int n){
	int bin = 0,base = 1;
	while(n > 0){
		bin = bin +(n % 2)*base;
		base*=10;
		n/=2;
	}
	return bin;
}		
