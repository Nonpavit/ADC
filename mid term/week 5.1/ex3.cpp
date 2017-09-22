#include<stdio.h>

int main(){
int i,j,num;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=num-i;j++)
			printf(" ");
		for(j=1;j<=i+j+2;j++)
			printf("*");
		
		printf("\n");
	}

return 0;
}
