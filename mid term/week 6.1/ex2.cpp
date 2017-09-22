#include<stdio.h>
#include<math.h>
int main(){
	int num,i,j,k,a,b,max;
	
	printf("Enter distance a : ");//3 2
	scanf("%d",&a);
	printf("Enter distance b : ");
	scanf("%d",&b);
	max = a > b ? a : b;
	for(i=1;i<=max;i++){
		for(j = 1;j<= max;j++){
			if(a==max){
				if(i==1||(i+j == max+1&& j > max-b))
				printf("+");
				else
				printf(" ");
			}
			else{
			if(j+i == max+1||(i==1 &&j > max - a))
			printf("+");
			else
			printf(" ");
			}
		}
		printf("\n");
		
	}

return 0;
}

