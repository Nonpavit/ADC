#include<stdio.h>

int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(int row=1;row<=num;row++){                        
		for(int col=1;col<=num;col++){
			printf((row+col)%2==0 ? "*":" ");
		}
		printf("\n");
	}
	return 0;
}
