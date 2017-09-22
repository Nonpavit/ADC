#include <stdio.h>
int main()
{

	int d,even = 0 ,odd = 0;
	long num;
	printf("Enter a number : ");
	scanf("%ld",&num);
	while(num>0){
	    d = num%10;
		if(d%2==0){
			even++;
		}
		else
		 odd++;
		 num = num/10;
	}
	if(even>odd)
	printf("even major");
	else if(even<odd)
	printf("odd major");
	else 
	printf("no major");
	return 0;
}
