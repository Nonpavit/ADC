#include <stdio.h>
int main()
{

	int d,even = 0 ,odd = 0,count=0;
	long long num;
	printf("Enter a number : ");
	scanf("%lld",&num);
	while(num>0){
		num = num/10;
		count++;
	}
	printf("%d digit",count);
	
	return 0;
}
