#include<stdio.h>

int main(){
	int i,num,count = 0;
	printf("Enter a number : ");
	scanf("%d",&num);
	for(i=2;i<num;i++){
		if(num%i==0)
		count++;
	}
	printf(count==2 ? "prime" : "not prime");
	
	return 0;
}


