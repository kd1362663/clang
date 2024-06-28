#include<stdio.h>
main()
{
	char a;
	printf("文字を入力:");
	scanf("%c", &a);
	if ((a >= 'A' && a <= 'Z')||(a>='a'&&a<='z')) {
		printf("アルファベットだよ\n");
	}
	else {
		if (a >= '0' && a <= '9') {
			printf("数字だよ\n");
		}
		else {
			printf("その他の文字だよぉ\n");
		}
	}
}