#include<stdio.h>
void sav(int x, int y, int* sum, float * av );
main()
{
	int a, b, c;
	float d;
	printf("®”‚ğ2‚Â“ü—Í:");
	scanf("%d%d", &a,&b);
	
	sav(a, b, &c, &d);
	printf("‡Œv‚Í%dA•½‹Ï‚Í%.2f", c, d);
}

void sav(int x, int y, int* sum, float* av )
{
	*sum = x + y;
	*av = (x+y)/2.0;
	
	return;
}
