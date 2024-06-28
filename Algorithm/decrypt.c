#include<stdio.h>
main()
{
	char s[20];
	int i;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢„");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0') {
		s[i] = s[i] -1;
		i++;
	}
	printf("•œ†‰»•¶š—ñ‚ÍA%s\n",s);

}