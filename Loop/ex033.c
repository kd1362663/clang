#include<stdio.h>
main()
{
	int a,b,c;
	printf("���́H�F");
	scanf("%d", &a);
	for (b = 0; a!=-999; c++) {
		b += a;
		printf("���́H");
		scanf("%d", &a);
	}
	printf("���v��%d\t���ρ�%.2f", b, (float)b / c);
}