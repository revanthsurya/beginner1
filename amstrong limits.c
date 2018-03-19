#include <stdio.h>
int main(void) {
	int n,a,sum,x;
	a=0;
	sum=0;
	scanf("%d",&n);
            x=n;
	while(n!=0)
	{
	a=n%10;
	sum=sum+a*a*a;
	n=n/10;
	}
	if(sum==x)
	{
	printf("yes");
	}
	else
	printf("no");
	return 0;
}
