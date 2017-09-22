#include<stdio.h>
void printArray(int [],int);
void reverse(int [],int);
int main(){
	int n[] = {9,8,2,8,9,5,2,5,4,1,1};
	int sum = 0,size;;
	int size,i,j;
	size = sizeof(n)/sizeof(n[0]);
	printf("Running\nn[] = {9,8,2,8,9,5,2,5,4,1,1}\n");
	for(i=0;i<=size;i++){
		sum = sum ^ n[i];	
	}
	printf("%d",sum);
	return 0;
}
