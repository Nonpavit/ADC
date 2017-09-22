#include<stdio.h>
int main(){
	int num,i,j,j2,i2,k,x=0;
	printf("Enter the first number : ");
	scanf("%d",&num);
	printf("Enter the second number : ");
	scanf("%d",&k);
	
	for(i=1;i<=num*k;i++){
		i2 = i%num==0 ? num : i%num;
		if(i%num == 1)
			x++;
		for(j=1;j<=num*x;j++){
			j2 = j%num==0 ? num : j%num;
		if(i2==1||j2==1||i2==num||j2==num)
		printf("*");
		else
		printf(" ");	
	}
		printf("\n");
	}
	return 0;
}
