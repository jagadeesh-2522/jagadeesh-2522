#include<stdio.h>
int main()
{
	int n,m,r,sum,f=1;
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;
	}
	while(r>1){
		f=f*r;
		r--;
	}
	sum=sum+f;
	n=n/10;
}

