#include<stdio.h>
#define SIZE 3
void MAXmin(int x, int y,int z, int* max, int * min );
main()
{
	int a, b, c,d,e;
	printf("整数を３つ入力:");
	scanf("%d%d%d", &a,&b,&c);

	MAXmin(a, b, c, &d,&e);
	printf("最大値＝%d 最小値＝%d", d, e);
}

void MAXmin(int x, int y, int z, int* max, int* min)
{
	*max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	*min= (x < y) ? (x < z ? x : z) : (y < z ? y : z); //めちゃ便利
	return;
}
