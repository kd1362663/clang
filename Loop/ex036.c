#include<stdio.h>
main()
{
	int a;
	printf("break test program\n");
	for (a = 1; a <= 10; a++){
		if (a == 7) {
			break;
		}
		printf("%3d", a);
	}
	printf("\n\ncontinue test program\n");
	for (a = 1; a <= 10; a++) {
		if (a == 7) {
			continue;
		}
		printf("%3d", a);
	}
}