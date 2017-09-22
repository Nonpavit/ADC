#include<stdio.h>

int main(){
	int num;
	do{
	printf("Enter an odd number : ");
	scanf("%d",&num);
	}while(num%2==0);
	for(int row=1;row<=num;row++){                        
		for(int col=1;col<=num;col++){
			if(row==1||col==(num/2+1))
			printf("T");
			else
			printf(" ");
		}
		printf(" ");
		for(int col = 1;col<=num;col++){
			if(col==1||col==num||row==num/2+1)
				printf("H");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
