#include <stdio.h>
int main(void) {
	int a,b,r,c;
	c=0;
	scanf("%d",&a);
	b=a;
	r=0;
	while(a!=0)
	{
		r=a%10;
		c=c*10+r;
		a=a/10;
	}
	if(b==c)
            printf("palindrom");
	else
	printf("not a palindrom");
	return 0;
}
