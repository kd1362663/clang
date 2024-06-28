#include<stdio.h>
main()
{
	int a,b,c;
	printf("数は？：");
	scanf("%d", &a);
	for (b = 0; a!=-999; c++) {
		b += a;
		printf("数は？");
		scanf("%d", &a);
	}
	printf("合計＝%d\t平均＝%.2f", b, (float)b / c);
}