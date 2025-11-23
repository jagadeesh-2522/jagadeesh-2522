#include<stdio.h>
int main()
{
	int i,n;
	float sum=0.0;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum=sum+1. 0/i;	
	}
	printf("sum of the series is %.4f\n",sum);
	return 0;
}
