#include<stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;
	printf("��������");
	scanf("%D", &ia);
	while (ia != -999) {
		gokei += ia;
		printf("��������");
		scanf("%d", &ia);
	}
	printf("���v��%d\n", gokei);
}