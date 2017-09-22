#include<stdio.h>

int isPalindrome(int);
int main(){
	int num,countEvent = 0,countOdd=0;
	do{
		printf("Enter (3-6 digit) palindrome : ");
		scanf("%d",&num);
		

	}while(num<=99||num>=10000||!isPalindrome(num));
	while(num > 0){
		if(num%10%2==0)
			countEvent++;
		else
			countOdd++;
		num/=10;
	}
	if(countEvent > countOdd)
			printf("Even majority");
		else if(countEvent < countOdd)
			printf("odd majority");	
		else
			printf("no majority");	

return 0;
}
int isPalindrome(int n){
	int sum = 0,temp = n;
	while(n>0){
		sum = sum*10+n%10;
		n/=10;
	}
	return sum == temp;
}
