#include<stdio.h>
main()
{
	char s[20];
	int i,k[20];
	printf("ˆÃ†‰»•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]‚Ì•œ†‰»ƒL[>", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("•œ†‰»•¶š—ñ‚ÍA%s\n", s);

}