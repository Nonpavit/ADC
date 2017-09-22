#include<stdio.h>
int sum(int a[],int b);
int main(){
	int num[] = {2,9,1,5,3,4};
	int size;
	size = sizeof(num)/sizeof(num[0]);
	printf("%d",sum(num,size));
	
	return 0;
}

int sum(int a[],int b){
	int i,total=0;
	
	for(i=0;i<b;i++){
		total+=a[i];
	}
	return total;
}
