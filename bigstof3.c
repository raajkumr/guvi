#include <stdio.h>
int main(void) 
{
	float a,b,c,big;
	scanf("%f %f %f",&a,&b,&c);
	if((a==b)&&(b==c))
	printf("all are equal");
    else if(a>b)	
    {
    	big=a;
    }
    else
	{
		big=b;
	}
	if(big>c)
	{
		printf("%f",big);
	}
	else printf("%f",c);
		
	return 0;
}
