#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
main()
{
	int un,a;
	srand(time(0));
	un = rand()%5+1;
	printf("今日のあなたの運勢は");
	for (a = 0; a < un;a++) {
		printf("☆");
	}
	printf(" です。\n");
	
}