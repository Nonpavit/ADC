#include<stdio.h>

int main(){
	int num,i,j,j2,col;
	printf("Enter a number : ");
	scanf("%d",&num);
	printf("how many colums ?");
	scanf("%d",&col);
	for(i=1;i<=num;i++){
		for(j=1;j<=num*col;j++){
			j2 = j%num==0 ?num : j%num;
		if(i==1||i==num||j2==num||j2==1)
		printf("*");
		else
		printf(" ");	
	}
		printf("\n");
	}
	
	return 0;
}
