#include<stdio.h>
main()
{
	char a;
	printf("•¶Žš‚ð“ü—ÍF");
	scanf("%c", &a);
	if (a >= 'A' && a <= 'Z') {
		printf("•ÏŠ·‚·‚é‚Æ%c\n", a + 0x20);
	}
	else {
		if (a >= 'a' && a <= 'z') {
			printf("•ÏŠ·‚·‚é‚Æ%c\n", a - 0x20);
		}
		else {
			printf("‚¦‚ç[‚¾‚æ‚§\n");
		}
	}
}