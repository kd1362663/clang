#include<stdio.h>
main()
{
	int a,b;
	printf("数を入れて：");
	scanf("%d", &a);
	for (b = 1; b <= 5; b++) {
		printf("%d ",a*b);
	}
}