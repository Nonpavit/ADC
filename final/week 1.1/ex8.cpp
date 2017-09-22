  #include<stdio.h>
int sum(int a[],int b);
int main(){
	int num[] = {2,9,2,3,9,5,2};
	int size,i,j,count=0;
	size = sizeof(num)/sizeof(num[0]);
	printf("num[] = {2,9,1,5,3,4}\n");
	printf("Running\n");
	for(i=0;i<size-1;i++){
		for(j=i+1;j<size;j++){
			if(num[i]==num[j]){
				count++;
				break;
			}
		}	
	}
	printf("%d",count);
	return 0;
}


