#include<stdio.h>
void printArray(int [],int);
void reverse(int [],int);
int main(){
	int a[] = {9,20,3,8,4,5,6,7,8,9,10};
	int size;
	
	size = sizeof(a)/sizeof(a[0]);
	printArray(a,size);
	reverse(a,size);
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
void reverse(int x[],int s){ //9 20 3 8 4 5 
	int l,r,temp;				//5 4 8 20 9
	l = 0;
	r =s-1;
	while(l<=r){
		temp = x[l];
		x[l] = x[r];
		x[r] = temp;
		l++;
		r--;
	}	
}
