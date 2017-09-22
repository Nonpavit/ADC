#include<stdio.h>
#include<stdlib.h>

int min(int,int);
int main(){
int i,j,num,i2,j2,i22,j22;
	printf("Enter an odd number : ");
	scanf("%d",&num);
	for(i=1;i<=2*num-1;i++){
		i2 =abs(num-i);
		for(j=1; j<=i2;j++)
			printf(" ");
		for(j=1; j<=2*(num-i2)-1;j++)
			printf("*",min(i2,j2));
		
		printf("\n");
	}

return 0;
}
int min(int a,int b){
	return a < b ? a : b;
	
}


