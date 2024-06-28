#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
main()
{
	int r,a,b;
	srand(time(0));
	r = rand() % 3;
	printf("何を出しますか？\n（１：グー　２：チョキ　３：パー）＞");
	scanf("%d", &b);
		if (b == 1) {
			printf("プレイヤーは、グーです。");
		}
		else {
			if (b == 2) {
				printf("プレイヤーは、チョキです。");
			}
			else {
				if (b == 3) {
					printf("プレイヤーは、パーです。");
				}
			}
		}
		printf("\n");
		if (r == 0) {
			printf("CPは、グーです。");
		}
		else {
			if (r== 1) {
				printf("CPは、チョキです。");
			}
			else {
				if (r == 2) {
					printf("CPは、パーです。");
				}
			}
		}
		printf("\n");
		if (b == 1 && r == 0) {
			printf("あいこだよ");
	}
		if (b == 1 && r == 1) {
			printf("プレイヤーの勝ちだよ");
		}
		if (b == 1 && r == 2) {
			printf("CPの勝ちだよ");
		}
		if (b == 2 && r == 0) {
			printf("CPの勝ちだよ");
		}
		if (b == 2 && r == 1) {
			printf("あいこだよ");
		}
		if (b == 2 && r == 2) {
			printf("プレイヤーの勝ちだよ");
		}
		if (b == 3 && r == 0) {
			printf("プレイヤーの勝ちだよ");
		}
		if (b == 3 && r == 1) {
			printf("CPの勝ちだよ");
		}
		if (b == 3 && r == 2) {
			printf("あいこだよ");
		}
	

	
}