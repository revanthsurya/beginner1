#include <stdio.h>
int main(void) {
	int a,ans;
	ans=0;
	scanf("%d",&a);
	for(int i=1;i<=5;i++)
	{
		ans=i*a;
		printf("%d \t",ans);
	}
	return 0;
}
