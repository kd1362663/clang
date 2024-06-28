#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
main()
{
	int un,a;
	srand(time(0));
	un = rand()%5+1;
	printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í");
	for (a = 0; a < un;a++) {
		printf("™");
	}
	printf(" ‚Å‚·B\n");
	
}