#include<stdio.h>
main()
{
	double a,b;
	printf("�Q�̎����l");
	scanf("%lf%lf", &a, &b);
	printf("* * * %f �� %f �� �l�����Z * * *", a, b);
	printf("�a��%.6f ����%.6f �ρ�%.6f ����%.6f", a + b, a - b, a * b, a / b);
}