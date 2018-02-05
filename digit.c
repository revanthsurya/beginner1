#include <stdio.h>
int main(void) {
	int a,i;
	scanf("%d",&a);
	i=0;
	while(a!=0)
	{
		a=a/10;
	
		i++;
	}
	
	printf("%d",i);
	return 0;
}
