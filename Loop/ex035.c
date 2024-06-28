#include<stdio.h>
main()
{
	int g, s;
	g = 0;
	while (1) {
		printf("”‚ğ“ü‚ê‚ÄF");
		scanf("%d", &s);
		if (s == -999) {
			break;
		}
		g += s;
	}
	printf("‡Œv%d", g);
}