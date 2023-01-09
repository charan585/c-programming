#include<stdio.h>
int main()
{
	int n,i;
	int sum=0;
	printf("enter the number");
	scanf("%d",&n);
	int k=n;
	int r;
	while(k!=0)
	{
		r=k%10;
		int f=fact(r);
		k=k/10;
		sum=sum+f;
		
	}
	if(sum==n)
	{
		printf("\ngiven number is a strong number");
		
	}
	else
	{
		printf("\ngiven number is not stronger");
	}
	return 0;
	
}
int fact(int r)
{
	int mul=1,i;
	for(i=1;i<=r;i++)
	{
		mul=mul*i;
		
	}
	return mul;
}
