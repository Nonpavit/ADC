#include<stdio.h>
void printArray(int [],int);
void coppy(int [],int [],int);
int insert(int [],int,int,int);
int main(){
	int a[20] = {9,20,3,8,4,5};
	int size,value,loc;
	size = 0;
	while(a[size] != 0)
		size++;
	
	printf("Enter value to insert : ");
	scanf("%d",&value);
	printf("Enter location to insert : ");
	scanf("%d",&loc);
	printf("befor insertion\n");
	printArray(a,size);
	size = insert(a,size,value,loc);
	printf("after insertion\n");
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
int insert(int x[],int s,int v ,int l){
	int i,j;
	for(i=s-1;i>=l;i--)
		x[i+1] = x[i];
		
		x[l] = v;
		
	return s+1;
}

