#include<stdio.h>
#include<stdlib.h>

int min(int,int);
int main(){
int i,j,num,i2,j2;
	printf("Enter an odd number : ");
	scanf("%d",&num);
	for(i=1;i<=2*num-1;i++){
		i2 = num - abs(num-i);
		for(j=1;j<=(2*num-1);j++){
		j2 = num - abs(num-j);
		printf("%d",min(i2,j2));
		}
		printf("\n");
	}

return 0;
}

int min(int a,int b){
	return a < b ? a : b;
	
}
