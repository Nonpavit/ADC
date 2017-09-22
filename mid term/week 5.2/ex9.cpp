#include<stdio.h>
void toBinary(int);
int main(){
	int num,status,loc;
	printf("Enter a number : ");
	scanf("%d",&num);// 56 = 00111000
	printf("Origina ");
	toBinary(num);
	printf("\n");
	printf("Enter bit location to clear : ");
	scanf("%d",&loc);// 3
	
	num = num & ~(1 << loc);
	toBinary(num);
	return 0;
}

void toBinary(int n){
	int i;
	for(i=7;i>=0;i--){
		printf("%d",(1<<i)&n ? 1 : 0 );
	}
}
