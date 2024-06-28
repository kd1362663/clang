#include <stdio.h>
int kurabe(int a, int b);
main()
{
	int a, b;
	printf("‚Q‚Â‚Ì®”F");
	scanf("%d%d", &a, &b);
	printf("MAX=%d", kurabe(a,b));
}
int kurabe(int a, int b)
{
	if (a < b) {
		return(b);
	}
	else{
		return(a);
	}
}