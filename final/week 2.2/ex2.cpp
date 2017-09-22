#include<stdio.h>
void printArray(int[],int);
int main(){
	int n[] = {3,1,4,5,2,1};
	int i,j,sizeN,max;
	
	sizeN = sizeof(n)/sizeof(n[0]);
	max = n[0]+n[1];
	for(i=0;i<sizeN;i++){
		max = max > n[i]+n[i+1] ? max : n[i]+n[i+1];
	}
	for(i=0;i<sizeN;i++){
		if(n[i]+n[i+1]==max)
			printf("%d + %d = %d",n[i],n[i+1],max);
	}
	
	
	return 0;
}

