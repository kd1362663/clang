#include<stdio.h>
main()
{
	char data[] = "Language", * p_data, a;
	int i;
	printf("data[]=%s\n", data);
	printf("検索文字は？");
	scanf("%c", &a);
	for (p_data = data, i = 0; *(p_data + i) != '\0'; i++) {
		if (ch == *(p_data + i)) {
			printf("%d ", i + 1);
		}
	}
	printf("です\n");
}