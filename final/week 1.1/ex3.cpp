#include<stdio.h>

void printArray(int[],int);
void printRevese(int[],int);
int main(){
	int num[] = {2,9,1,5,3,4};
	int size;
	size = sizeof(num)/sizeof(num[0]);
	printArray(num,size);
	printRevese(num,size);
	return 0;
}
void printArray(int a[],int b){
	int i;
	for(i=0;i<b;i++){
		printf("%d ",a[i]);
		
	}
	printf("\n");
}
void printRevese(int a[],int b){
	int i;
	for(i = b-1;i>=0;i--){
		printf("%d ",a[i]);
	}
}
