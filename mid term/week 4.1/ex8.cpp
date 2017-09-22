#include <stdio.h>
#include <math.h>

int main(){
	int base , power;
	printf("Enter base : ");
	scanf("%d",&base);
	printf("Enter power : ");
	scanf("%d",&power);
	
	printf("%d^%d = %d",base,power,(int)pow(base,power));
	
	return 0;
}
