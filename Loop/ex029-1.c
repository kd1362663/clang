#include<stdio.h>
main()
{
	int a,b;
	printf("数を入れて");
	scanf("%d",&a);
	b = 0;
	while (b < a) {
		printf("*");
		a--;
	}
}