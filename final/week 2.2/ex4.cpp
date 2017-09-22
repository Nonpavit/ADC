#include<stdio.h>

int main(){
	int n[] = {3,5,1,9,2},a[100]={0};
	int i,j,sizeN,k,d,found=0;
	printf("Enter value of K:");
	scanf("%d",&k);//45
	
	sizeN = sizeof(n)/sizeof(n[0]);
	for(i=0;i<sizeN;i++){
		if(k%n[i]==0){
			d = k/n[i];
			if(a[d]>0&& d>0){
				found = 1;
				break;
			}
		a[n[i]] = 1;
		}
	}
	printf(found ? "yes" : "no");
	return 0;
}

