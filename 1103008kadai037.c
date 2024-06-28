//1103008kadai037.c
#include<stdio.h>
main()
{
	int a;
	printf("‚O‚©‚ç‚P‚O‚O‚Ü‚Å‚Ì®”H\n");
	scanf("%d", &a);
	if (a >= 0 && a < 30) {
		printf("‚»‚Ì”’l‚Ì”»’èŒ‹‰Ê‚Íu‚Pv‚Å‚·\n");
	}
	else {
		if (a >= 30 && a < 50) {
			printf("‚»‚Ì”’l‚Ì”»’èŒ‹‰Ê‚Íu‚Qv‚Å‚·\n");
		}
		else {
			if (a >= 50 && a < 80) {
				printf("‚»‚Ì”’l‚Ì”»’èŒ‹‰Ê‚Íu‚Rv‚Å‚·\n");
			}
			else {
				if (a >= 80 && a < 90) {
					printf("‚»‚Ì”’l‚Ì”»’èŒ‹‰Ê‚Íu‚Sv‚Å‚·\n");
				}
				else {
					if (a >= 90 && <= 100) {
						printf("‚»‚Ì”’l‚Ì”»’èŒ‹‰Ê‚Íu‚Tv‚Å‚·\n");
					}
				}
			}
		}
	}
}