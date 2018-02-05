#include <stdio.h>
int main(void) {
	int a[10000],n,k,sum;
	sum=0;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=0;j<k;j++)
	{
		sum=sum+a[j];
	}
	
printf("%d",sum);

	return 0;
}
