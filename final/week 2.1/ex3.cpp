#include<stdio.h>
void printArray(int [],int);
void reverse(int [],int);
int main(){
	int n[] = {3,9,3,10,5,100,5,5};
	int count[3001] = {0};
	int size,i,j;
	size = sizeof(n)/sizeof(n[0]);
	printf("Running\nn[] = {3,9,3,10,5,100,5,5}\n");

	for(i=0;i<=size;i++){
		count[n[i]]++;	
	}
	for(i=1;i<=3000;i++){
		if(count[i] > 0){
			for(j=1 ; j<= count[i];j++)
				printf("%d ",i);
		}
	}
	
	return 0;
}
