#include<stdio.h>

int main(){
	int i,num,n,hold;
	printf("Enter a number : ");
	scanf("%d",&num);
	hold = num;
	printf("%d = ",num);
	
	while(num > 1){
		for(i=2;i<=num;i++){
			if(num%i == 0){
				printf(num == hold ? "%d" : " x %d" ,i);
				num /=i;
				break;
			}
		}
	}
	
	return 0;
}


