#include <stdio.h>
int main(void) {
	int a[10000],n,k,sum;
	sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	for(int j=0;j<k;j++)
	{
		sum=sum+a[j];
	}
	
printf("%d",sum);

	return 0;
}
