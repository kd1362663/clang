#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
main()
{
	int a,r;
	char w;
	srand(time(0));
	printf("今なら１００連ガチャ引き放題！！！\n\t引くか？？？");
	scanf("%c", &w);
	if (w == 'g'); {


		for (a = 0; a <= 100; a++) {
			r = rand() % 1000;
			if (r <= 1) {
				printf("運良すぎでは？\n");
			}
			else {
				if (r <= 100) {
					printf("まぁいいことありそうかも\n");
				}
				else {
					if (r <= 500) {
						printf("何とも言えないレベルよね\n");
					}
					else {

						printf("寝とけ\n");
					}
				}
			}
		}
	}
}