#include<stdio.h>

int main(){
	int i,t=2;
	long long t1,t2,t3,sum=2;
	
	t1=1;
	t2=1;
	printf("%lld %lld ",t1,t2);
	for(i=3;i<=30;i++){
		t3 = t1+t2;
		printf("%lld ",t3);
		sum = sum+t3;
		t1 = t2;
		t2 = t3;
	}
	printf("sum = %lld",sum);
	return 0;
}
