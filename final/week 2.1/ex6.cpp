#include<stdio.h>
void printArray(int [],int);
int main(){
	int n[] = {9,8,4,1,3};
	int i,pass,temp,size;
	size = sizeof(n)/sizeof(n[0]);
	printf("Sort ");
	printArray(n,size);
	
	for(pass = 1;pass < size; pass++){
		for(i=0;i<size-pass;i++){
			if(n[i] > n[i+1]){
				temp = n[i];
				n[i] = n[i+1];
				n[i+1] = temp;
			}	
			
		}
	}
	printArray(n,size);
	
	return 0;
}

void printArray(int x[],int s){
	int i;
	for(i=0;i<s;i++){
		printf("%d ",x[i]);
	}
	printf("\n");
}
