#include<stdio.h>
main()
{
	char data[]="Apple";
	int i;
	printf("‚P•¶Žš‚¸‚Â•\Ž¦\n");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}
	printf("\n•¶Žš—ñ‚Å•\Ž¦\n%s\n", &data[0]);


}