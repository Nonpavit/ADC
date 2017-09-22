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
	int i,min,result;
	min = a < b ? a : b;
	for(i = min;i>=1;i++){
		if(a%i==0&&b%i==0)
		result = i;
		break;
	}
	
	return result;
}
