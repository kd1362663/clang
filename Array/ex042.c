#include<stdio.h>
main()
{
	char data[]="Apple";
	int i;
	printf("�P�������\��\n");
	for (i = 0; data[i] != '\0'; i++) {
		printf("%c", data[i]);
	}
	printf("\n������ŕ\��\n%s\n", &data[0]);


}