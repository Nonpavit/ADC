#include <stdio.h>
#include <math.h>

int main(){
	int num , numDigit;
	printf("Enter a number : ");
	scanf("%d",&num);
	numDigit = (int)log10(num);
	printf("%d has %d digit",num,numDigit+1);
	
	return 0;
}
