#include<stdio.h>
int main()
{
	int a[10],i=0,k,n,r;
	scanf("%d",&n);
	scanf("%d",&j);
	while(n>0)
	{
		r=n%10;
		a[i]=r;
		i++;
		n=n/10;
	}
	for(k=0;k<i;k++)
	{
	printf("%d",a[k]);
	}
	
return 0;	
