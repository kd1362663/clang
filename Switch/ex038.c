#include<stdio.h>
main()
{
	int a;
	printf("��������́F");
	scanf("%d", &a);
	if (a >= 10 && a <= 49) {
		switch (a / 10) {
			case 1:printf("�P�O�_��ł�\n");
				break;
			case 2:printf("�Q�O�_��ł�\n");
				break;
			case 3:printf("�R�O�_��ł�\n");
				break;
			case 4:printf("�S�O�_��ł�\n");
				break;
		}
	}
	else {
		printf("�G���[���悧\n");
	}
}