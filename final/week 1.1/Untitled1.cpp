#include<stdio.h>
int main(){
	int size,i;
	printf("Enter size of an array : ");
	scanf("%d",&size);
	int num[size];
	for(i=0;i<size;i++){
		printf("Element %d : ",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<size;i++)
		printf("%d ",num[i]);
	
	return 0;
}
