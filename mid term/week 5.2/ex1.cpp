#include<stdio.h>

int main(){
	int num,i,j;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=num;j++){
		if(i==1||i==num||j==num||j==1)
		printf("*");
		else
		printf(" ");	
	}
		printf("\n");
	}
	
	return 0;
}
