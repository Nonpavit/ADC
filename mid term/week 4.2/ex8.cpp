#include<stdio.h>

int main(){
	int num,row,col;
	do{
	printf("Enter an odd number : ");
	scanf("%d",&num);
	}while(num%2==0);
	for(row=1;row<=num;row++){                        
		for(col=row;col<=num;col++){
			printf("%d",col);
			
		}
		for(col=1;col<row;col++){
			printf("%d",col);
			
		}
		printf("\n");
	}
	return 0;
}
