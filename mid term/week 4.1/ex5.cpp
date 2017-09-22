#include<stdio.h>
//Highest Common factor (HCF)
//Greatest common Divisor (GCD)

int gcd(int , int);
int main(){
	int num1,num2;
	printf("Enter 2 number : ");
	scanf("%d %d",&num1,&num2);
	printf("GCD = %d",gcd(num1,num2));
	return 0;
}
int gcd(int a,int b){
	int temp;
	while(a%b !=0){
		temp = a;
		a = b;
		b = temp % b;
	}
	
	return b;
}
