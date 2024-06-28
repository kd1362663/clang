#include<stdio.h>
void hai(char* s1, char* s2);
main()
{
	char a[256], b[256];
	printf("”z—ña:");
	gets(a);
	printf("”z—ñb:");
	gets(b);
	hai(a, b);
	printf("”z—ña:%s\n", a);

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