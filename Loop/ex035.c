#include<stdio.h>
main()
{
	int g, s;
	g = 0;
	while (1) {
		printf("�������āF");
		scanf("%d", &s);
		if (s == -999) {
			break;
		}
		g += s;
	}
	printf("���v��%d", g);
}