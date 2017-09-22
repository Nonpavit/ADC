#include<stdio.h>

int main(){
int i,j,num;
	printf("Enter an odd number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=num;j++){
			if(j==(num/2)+1||i==(num/2)+1)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}

return 0;
}
