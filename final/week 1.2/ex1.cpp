#include<stdio.h>
void printArray(int [],int);
void coppy(int [],int [],int);
int main(){
	int a[] = {9,20,3,8,4,5};
	int b[20],size;
	
	size = sizeof(a)/sizeof(int);
	printArray(a,size);
	coppy(a,b,size);
	printArray(a,size);
	return 0;
}
void printArray(int x[],int s){
	int i;
	for(i=0;i<s;i++){
		printf("%d ",x[i]);
	}
	printf("\n");
}
void coppy(int x[],int y[],int s){
	int i;
	for(i=0;i<s;i++)
		y[i] = x[i];
	
}
