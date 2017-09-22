#include<stdio.h>
void printArray(int [],int);
void reverse(int [],int);
int main(){
	int n[] = {9,8,2,8,9,5,2,5,4,1,1};
	int count[3001] = {0};
	int size,i,j;
	size = sizeof(n)/sizeof(n[0]);
	printf("Running\nn[] = {9,8,2,8,9,5,2,5,4,1,1}\n");

	for(i=0;i<=size;i++){
		count[n[i]]++;	
	}
	for(i=1;i<=size;i++){
		if(count[n[i]] == 1){
				printf("%d ",n[i]);
		}
	}
	
	return 0;
}
