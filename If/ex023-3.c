#include<stdio.h>
main()
{
	int a, b, c;
	printf("‰‰Zq‚ğ“ü—ÍF");
	scanf("%d", &a);
	printf("‚Q‚Â‚Ì®”‚ğ“ü—ÍF");
	scanf("%d%d", &b, &c);
	if (a == 1) {
		printf("%d\n", b + c);
	}
	else {
		if (a == 2) {
			printf("%d\n", b - c);
		}
		else {
			if (a == 3) {
				printf("%d\n", b * c);
			}
			else {
				if (a == 4) {
					printf("%d\n", b / c);
				}
			}	
		}	
	}
}