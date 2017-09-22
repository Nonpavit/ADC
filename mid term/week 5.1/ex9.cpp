#include<stdio.h>

int main(){
int i,j,num;
	printf("Enter an odd number : ");
	scanf("%d",&num);
	for(i=1;i<=2*num-1;i++){
		for(j=1;j<=2*num-1;j++){
			printf("*");
		}
		printf("\n");
	}

return 0;
}
