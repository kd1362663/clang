#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
main()
{
	int r,a;
	srand(time(0));
	for (a = 0; a < 100;a++) {
		r = rand() % 300 + 1;

		printf("%d \t", r);
	}
	
}