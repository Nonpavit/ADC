#include <stdio.h>
int main()
{

	int d,even = 0 ,odd = 0,count=0,sum = 0,temp;
	long long num;
	printf("Enter a number : ");
	scanf("%lld",&num);
	temp=num;
	while(num>0){
		sum = sum*10+num%10;
		num /=10;

	}
	
	printf(sum==temp ? "palindrome" : "not palindrome");
	
	return 0;
}
/*
	num       sum
	2348
	2348      0
	234       8
	23        8*10+4   ---> 84
	2         84*10+3	---> 843
	0		  843*10+2  ---> 8432

*/
