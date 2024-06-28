#include <stdio.h>
#include <stdlib.h>
#include <time.h>
main()
{
	int data[20];
	int i, a, b;
	for (i = 0; i < 20; i++) {
		data[i] = i + 1;
	}
	//ˆê‰žŠm”F‚µ‚Æ‚±‚¤‚Ë‚Ì‚Æ‚±
	for (i = 0; i < 20; i++) {
		printf("data[%2d]=%2d\n", i, data[i]);

	}
		srand(time(0));
	for (i = 0; i < 20; i++) {
		a = rand() % 20;
		b = data[a];
		data[a] = data[i];
		data[i] = b;
	}
	printf("\n\n");
	for (i = 0; i < 20; i++){
		printf("data[%2d]=%2d\n", i, data[i]);

	}
}