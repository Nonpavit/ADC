#include <stdio.h>
int main()
{

	int decimal = 0 ,base = 1;
	long long binary;
	printf("Enter a binary number : ");
	scanf("%lld",&binary);
	
	while(binary > 0){
		decimal = decimal + binary % 10*base;
		base *=2;
		binary /=10;
	}
	printf("decimal = %d",decimal);
	
	
	
	return 0;
}
/*
		16	8	4	2	1
			1	0	0	1	= 9
		1	1	1	1	0	= 30	
*/
