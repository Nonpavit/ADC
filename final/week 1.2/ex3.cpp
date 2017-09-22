#include<stdio.h>
void printArray(int [],int);
void coppy(int [],int [],int);
int deleteElement(int [],int,int);
int main(){
	int a[20] = {9,20,3,8,4,5};
	int size,value;
	size = 0;
	while(a[size] != 0)
		size++;
	printf(" 9,20,3,8,4,5 \n");
	printf("Enter value to delete : ");
	scanf("%d",&value);
	printf("befor insertion\n");
	printArray(a,size);
	size = deleteElement(a,size,value);
	printf("after deleteion\n");
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
int deleteElement(int x[],int s,int v ){
	int i,loc = -1;
	for(i=0 ; i<s;i++){
		if(x[i]==v){
			loc = i;
			break;
		}
	}
	if(loc != -1){   // 9,20,3,8,4,5
		for(i = loc; i < s-1 ;i++)
			x[i] = x[i+1];
			
			x[s-1] = 0;
			return s-1;
	}
	else
		return s;

}

