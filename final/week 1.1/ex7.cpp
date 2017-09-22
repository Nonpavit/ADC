  #include<stdio.h>
int sum(int a[],int b);
int main(){
	int num[] = {2,9,1,5,3,4};
	int size,i;
	size = sizeof(num)/sizeof(num[0]);
	printf("num[] = {2,9,1,5,3,4}\n");
	printf("Running\n");
	for(i=1;i<size;i++){
		if(num[i]<num[i+1]&&num[i]<num[i-1])
			printf("%d ",num[i]);
	}
	
	return 0;
}


