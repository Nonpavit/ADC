  #include<stdio.h>
int sum(int a[],int b);
int main(){
	int num[] = {2,9,1,5,3,4};
	int size,i,max1,max2;
	size = sizeof(num)/sizeof(num[0]);
	max1 = max2 = num[0];
	for(i=0;i<size;i++){
		if(num[i] > max1){
			max2 = max1;
			max1 = num[i];
		}
		else if(num[i] > max2){
			max2 = num[i];
		}
	}
	printf("num[] = {2,9,1,5,3,4}\n");
	printf("Running\n");
	printf("Maximum = %d\n",max1);
	printf("Second maximum = %d\n",max2);
	return 0;
}


