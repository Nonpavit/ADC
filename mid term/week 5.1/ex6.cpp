#include<stdio.h>

int main(){
int i,j,num;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			if(j==1||i==j||i==num)
			
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}

return 0;
}
