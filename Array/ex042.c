#include<stdio.h>
main()
{
	char data[]="Apple";
	int i;
	printf("１文字ずつ表示\n");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}
	printf("\n文字列で表示\n%s\n", &data[0]);


}