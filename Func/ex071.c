
#include <stdio.h>
int gokei(int a, int b, int c);
float heikin(int a, int b, int c);
main()
{
	int a, b, c,g;
	float av;
	printf("�R�̐�������́F");
	scanf("%d%d%d", &a, &b, &c);
	g = gokei(a, b, c);
	av = heikin(a, b, c);
	printf("���v��%d�A���ς�%.2f\n",g,av);

}
int gokei(int a, int b, int c)
{
	int g;
	g = a + b + c;
	return(g);
}
float heikin(int a, int b, int c)
{
	float av;
	av = (a + b + c) / 3.0;
	return(av);
}


