#include<stdio.h>
void printArray(int [],int);
int concat(int[] ,int,int[],int,int[]);
int main(){
	int a[] = {3,9,1,5};
	int b[] = {4,2,7};
	int c[30],sizeA,sizeB,sizeC;
	printf("Running\na[] = {3,9,1,5}\nb[] = {4,2,7}\n\n");
	sizeA = sizeof(a)/sizeof(a[0]);
	sizeB = sizeof(b)/sizeof(b[0]);
	printArray(a,sizeA);
	printArray(b,sizeB);
	sizeC = concat(a,sizeA,b,sizeB,c);
	printArray(c,sizeC);
	return 0;
}
void printArray(int x[],int s){
	int i;
	for(i=0;i<s;i++){
		printf("%d ",x[i]);
	}
	printf("\n");
}
int concat(int x[],int sx,int y[],int sy,int z[]){
	int ix,iy,iz;
	iz= 0;
	for(ix = 0; ix < sx ;ix++,iz++){
		z[iz] = x[ix];
	}
	for(iy = 0; iy < sy ;iy++,iz++){
		z[iz] = y[iy];
	}
	
	return iz;
}
