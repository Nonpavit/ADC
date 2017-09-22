  #include<stdio.h>
int sum(int a[],int b);
int main(){
	int num[] = {2,9,2,3,9,5,2};
	int size,i,j,count=0,found;
	size = sizeof(num)/sizeof(num[0]);
	printf("num[] = {2,9,2,3,9,5,2}\n");
	printf("Running\n");
	printf("%d ",num[0]);
	for(i=1;i<size;i++){
		found = 0;
		for(j=0;j<i;j++){
			if(num[i]==num[j]){
				found = 1;
				break;
			}
		}
		if(!found)
			printf("%d ",num[i]);
		
	}
	return 0;
}


