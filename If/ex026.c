#include<stdio.h>
main()
{
	int a;
	printf("������́F");
	scanf("%d", &a);
	if (a==1||a==3||a==5||a==7||a==8||a==10||a==12) {
		printf("�ŏI���͂R�P���ł�\n");
	}
	else {
		if (a==4||a==6||a==9||a==11) {
			printf("�ŏI���͂R�O���ł�\n");
		}
		else {
			printf("�ŏI���͂Q�W���ł�\n");
		}
	}
}