#include <stdio.h>
int main()
{

	int first,last;
	long long num;
	printf("Enter a number : ");
	scanf("%lld",&num);
	last = num%10;

	while(num>=10){
		num = num/10;
	}
	first = num;
	printf("%d+%d=%d",first,last,first+last);
	
	
	
	return 0;
}
/*
1234
123
12
1

num<10 out loop
	
*/
