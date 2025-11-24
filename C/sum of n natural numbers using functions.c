#include<stdio.h>
int factorial(int n){
	int i;
	int fact=1;
	for(i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}
int main()
{
	int n,result;
	scanf("%d",&n);
	result = factorial(n);
	printf("factorial is %d",result);
	return 0;
}
