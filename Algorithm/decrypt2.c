#include<stdio.h>
main()
{
	char s[20];
	int i,k[20];
	printf("暗号化文字列を入力してください＞");
	scanf("%s", &s);
	for (i = 0; s[i] != '\0'; i++) {
		printf("s[%d]の復号化キー>", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("復号化文字列は、%s\n", s);

}