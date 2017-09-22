#include<stdio.h>

int main(){
	int i,num,base = 5,count=0;
	printf("How many trailing zero are the in\n");
	printf("fine factorial of : ");
	scanf("%d",&num);
	printf("%d! has trailing zero = ",num);
	
	while(num/base>0){
		count +=(num/base);
		base *= 5;
	}
	printf("%d",count);
	return 0;
}

/*
	5! = 1 x 2 x 3 x 4 x 5
	6! = 1 x 2 x 3 x 4 x 5 x 6
	10! = 1 x 2 x 3 x 4 x 5 x 6 x 7 x 8 x 9 x 10
	30! = 1 x 2 x ... x 30
	number to down are 5 10 15 20 25 30
	finish 30! is number 0 = 7 digit
	*/ 
