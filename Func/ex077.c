#include<stdio.h>
#define SIZE 3
void MAXmin(int x, int y,int z, int* max, int * min );
main()
{
	int a, b, c,d,e;
	printf("�������R����:");
	scanf("%d%d%d", &a,&b,&c);

	MAXmin(a, b, c, &d,&e);
	printf("�ő�l��%d �ŏ��l��%d", d, e);
}

void MAXmin(int x, int y, int z, int* max, int* min)
{
	*max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	*min= (x < y) ? (x < z ? x : z) : (y < z ? y : z); //�߂���֗�
	return;
}
