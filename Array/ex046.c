#include<stdio.h>
main()
{
	int i, j, gokei;
	int a[][3] = { {10,20,30},{1,2,3} };
	for (i = 0; i <= 1; i++) {
		for (gokei = 0, j = 0; j <= 2; j++) {
			printf("a[%d][%d]=%d\n", i, j, a[i][j]);
			gokei += a[i][j];
			
		}
		if (i == 0) {
			printf("�O�s�ڂ̍��v=%d\n\n", gokei);
		}
	}
	printf("1�s�ڂ̍��v��%d\n", gokei);




}