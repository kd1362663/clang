#include<stdio.h>
main()
{
	char s[20];
	int i;
	printf("���������͂��Ă���������");
	scanf("%s", &s);
	i = 0;
	while (s[i] != '\0') {
		s[i] = s[i] -1;
		i++;
	}
	printf("������������́A%s\n",s);

}