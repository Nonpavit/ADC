#include<stdio.h>

int main(){
	int i,num1,num2,j,count = 0;
	printf("Enter the fist  : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);
	
	for(i=num1;i <= num2;i++){
		count = 1;
		for(j=2;j*j <= i;j++){
			if(i%j==0)
			count=0;
			break;
		}
		if(count == 1)
		printf("%d ",i);
	}

	
	return 0;
}


