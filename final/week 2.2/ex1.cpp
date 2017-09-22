#include<stdio.h>
void printArray(int[],int);
int main(){
	int a[] = {3,9,8};
	int b[] = {8,9,3},i,j,c=0,sizeA,sizeB;
	
	sizeA = sizeof(a)/sizeof(a[0]);
	sizeB = sizeof(b)/sizeof(b[0]);
	printf("a[] = {3,9,8}\nb[] = {8,9,3}\n");
	if(sizeA==sizeB){
		for(i=0;i<sizeA;i++){
			for(j=0;j<sizeB;j++){
				if(a[i]==b[j])
					c++;
			}
		}
		if(c==sizeA)
			printf("equal");
		else
			printf("not equal");	
	}
	else
		printf("not equal");
		
	return 0;
}

