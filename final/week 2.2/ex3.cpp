#include<stdio.h>
void printArray(int[],int);
int main(){
	int n[] = {3,5,1,9,2};
	int i,j,sizeN,k,sum,found=0;
	printf("Enter value of K:");
	scanf("%d",&k);
	
	sizeN = sizeof(n)/sizeof(n[0]);
	for(i=0;i<sizeN-1;i++){
		for(j=i+1;j<sizeN;j++){
			if(n[i]+n[j]==k){
				found=1;
				i=sizeN;
				break;
			}
		}
	}
	printf(found ? "yes" : "no");
	
	return 0;
}

