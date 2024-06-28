#include<stdio.h>
main()
{
	double a,b;
	printf("‚Q‚Â‚ÌÀ”’l");
	scanf("%lf%lf", &a, &b);
	printf("* * * %f ‚Æ %f ‚Ì l‘¥‰‰Z * * *", a, b);
	printf("˜a%.6f ·%.6f Ï%.6f ¬%.6f", a + b, a - b, a * b, a / b);
}