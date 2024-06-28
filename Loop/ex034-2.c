#include<stdio.h>
main()
{
	int i,k;
	printf("”‚ÍH");
	scanf("%d", &i);
	do {
		k = 0;
		do{
			printf("*");
			k++;
		} while (k < 5);
		printf("\n");
		i--;
	} while (i>0);
}
