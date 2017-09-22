#include<stdio.h>
int sum(int a[],int b);
int main(){
	int num[] = {2,9,1,5,3,4};
	int size,i,max,min;
	size = sizeof(num)/sizeof(num[0]);
	
	max = min = num[0];
	for(i=0;i<size;i++){
		if(num[i] > max)
			max = num[i];
		if(num[i] < min)
			min = num[i];
	}
	printf("Running\n");
	printf("Maximum = %d\n",max);
	printf("Minimum = %d\n",min);	
	return 0;
}


