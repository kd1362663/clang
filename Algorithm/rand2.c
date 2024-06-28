#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
main()
{
	int dice;
	srand(time(0));
	dise = rand()%6+1;//どんな数でも６で割るとあまりが０～５の値になることを利用
	printf("サイコロは%dです\n", dice);
}