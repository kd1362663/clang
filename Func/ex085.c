#include<stdio.h>
void hai(char* s1, char* s2);
main()
{
	char a[256], b[256];
	printf("�z��a:");
	gets(a);
	printf("�z��b:");
	gets(b);
	hai(a, b);
	printf("�z��a:%s\n", a);

}
void hai(char* s1, char* s2)
{
	for (; *s1 != '\0'; *s1++);
	while (*s2 != '\0') {
		*s1 = *s2;
		*s1++;
		*s2++;
	}
	*s1 = '\0';
}