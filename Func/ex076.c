#include<stdio.h>
void sav(int x, int y, int* sum, float * av );
main()
{
	int a, b, c;
	float d;
	printf("整数を2つ入力:");
	scanf("%d%d", &a,&b);
	
	sav(a, b, &c, &d);
	printf("合計は%d、平均は%.2f", c, d);
}

void sav(int x, int y, int* sum, float* av )
{
	*sum = x + y;
	*av = (x+y)/2.0;
	
	return;
}
