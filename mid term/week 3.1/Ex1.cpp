#include <stdio.h>
int main()
{

	int sum = 0,even = 0 ,odd = 0;
	long num;
	printf("Enter a number : ");
	scanf("%ld",&num);
	while(num>0){
		sum = sum+num%10;
		if(num%2==0){
			even++;
		}
		else
		 odd++;
		 
		 num = num/10;
	}
	printf("count event = %d \n",even);
	printf("count odd = %d \n",odd);
	return 0;
}
