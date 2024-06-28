#include<stdio.h>
#define SIZE 3
void MAXmin(int x, int y,int z, int* max, int * min );
main()
{
	int a, b, c,d,e;
	printf("®”‚ð‚R‚Â“ü—Í:");
	scanf("%d%d%d", &a,&b,&c);

	MAXmin(a, b, c, &d,&e);
	printf("Å‘å’l%d Å¬’l%d", d, e);
}

void MAXmin(int x, int y, int z, int* max, int* min)
{
	*max = (x > y) ? (x > z ? x : z) : (y > z ? y : z);
	*min= (x < y) ? (x < z ? x : z) : (y < z ? y : z); //‚ß‚¿‚á•Ö—˜
	return;
}
