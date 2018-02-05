#include <stdio.h>
int main(void) {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	a>b&&a>c?printf("%d",a):(b>a&&b>c?printf("%d",b):printf("%d",c));
	return 0;
}
