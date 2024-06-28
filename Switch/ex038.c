#include<stdio.h>
main()
{
	int a;
	printf("®”‚ð“ü—ÍF");
	scanf("%d", &a);
	if (a >= 10 && a <= 49) {
		switch (a / 10) {
			case 1:printf("‚P‚O“_‘ä‚Å‚·\n");
				break;
			case 2:printf("‚Q‚O“_‘ä‚Å‚·\n");
				break;
			case 3:printf("‚R‚O“_‘ä‚Å‚·\n");
				break;
			case 4:printf("‚S‚O“_‘ä‚Å‚·\n");
				break;
		}
	}
	else {
		printf("ƒGƒ‰[‚¾‚æ‚§\n");
	}
}