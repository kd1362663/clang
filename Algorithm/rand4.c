#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
main()
{
	int un,a;
	srand(time(0));
	un = rand()%5+1;
	printf("�����̂��Ȃ��̉^����");
	for (a = 0; a < un;a++) {
		printf("��");
	}
	printf(" �ł��B\n");
	
}