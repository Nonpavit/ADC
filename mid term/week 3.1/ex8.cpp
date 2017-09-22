#include <stdio.h>
int main()
{
	long long binary= 0;
	int decimal,base = 1 ;
	printf("Enter a binary number : ");
	scanf("%d",&decimal);
	
	while(decimal > 0){
		binary = binary+decimal%2 *base;
		base *=10;
		decimal /=2;
	}
	printf("binary = %d",binary);
	
	return 0;
}
/*
		decimal 9 = binary
		decimal 14 = binary 
		
		2  |9  >1
		2  |4  >0
		2  |2  >0
		2  |1  >1
			0
		01001
		
		1*1 + 0*10 + 0*10 + 1*1000
		   
*/
