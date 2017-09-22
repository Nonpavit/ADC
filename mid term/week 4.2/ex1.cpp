#include<stdio.h>

int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);                          
		for(int i=1;i<=num;i++){
		printf("%d",i%3==0 ? 3 : i%3);
			
		}
	
	return 0;
}
