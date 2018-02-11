#include <stdio.h>
int main(void) {
	int n,k=0,a;
	scanf("%d",&n);
	for(int i=1;i<=n/2;i++)
	{
		if(n%i==0)
		k++;
	}
	if(k<=1)
	printf("prime");
	else
	printf("not a prime");
	
	return 0;
}
