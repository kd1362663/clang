//1103008kadai037.c
#include<stdio.h>
main()
{
	int a;
	printf("０から１００までの整数？\n");
	scanf("%d", &a);
	if (a >= 0 && a < 30) {
		printf("その数値の判定結果は「１」です\n");
	}
	else {
		if (a >= 30 && a < 50) {
			printf("その数値の判定結果は「２」です\n");
		}
		else {
			if (a >= 50 && a < 80) {
				printf("その数値の判定結果は「３」です\n");
			}
			else {
				if (a >= 80 && a < 90) {
					printf("その数値の判定結果は「４」です\n");
				}
				else {
					if (a >= 90 && <= 100) {
						printf("その数値の判定結果は「５」です\n");
					}
				}
			}
		}
	}
}