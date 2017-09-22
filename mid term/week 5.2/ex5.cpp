#include<stdio.h>
int main(){
	int num,status;
	printf("Enter the first number : ");
	scanf("%d",&num);// 56
	status = num & 1;
	printf("LSB is ");
	printf(status ? "set" : "unset");
	
	return 0;
}
