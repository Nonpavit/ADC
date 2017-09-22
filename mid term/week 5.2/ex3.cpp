#include<stdio.h>

int main(){
	int num,i,j,j2,col,i2,row;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("how many colums ? ");
	scanf("%d",&col);
	printf("how many row ? ");
	scanf("%d",&row);

	for(i=1;i<=num*row;i++){
		i2 = i%num==0 ? num : i%num;
		for(j=1;j<=num*col;j++){
			j2 = j%num==0 ?num : j%num;
		if(i2==1||j2==1||i2==num||j2==num)
		printf("*");
		else
		printf(" ");	
	}
		printf("\n");
	}

	
	return 0;
}
