#include<stdio.h>
int main(){
	int num,status,loc;
	printf("Enter the first number : ");
	scanf("%d",&num);// 56 = 00111000
	printf("Enter bit location to check : ");
	scanf("%d",&loc);
	
	status = (num>>loc) & 1;
	printf("bit at %d is  ",loc);
	printf(status ? "set" : "unset");
	
	return 0;
}
