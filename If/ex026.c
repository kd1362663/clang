#include<stdio.h>
main()
{
	int a;
	printf("月を入力：");
	scanf("%d", &a);
	if (a==1||a==3||a==5||a==7||a==8||a==10||a==12) {
		printf("最終日は３１日です\n");
	}
	else {
		if (a==4||a==6||a==9||a==11) {
			printf("最終日は３０日です\n");
		}
		else {
			printf("最終日は２８日です\n");
		}
	}
}