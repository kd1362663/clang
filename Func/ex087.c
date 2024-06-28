#include <stdio.h>
main(int argc, char* argv[])
{
	int sum;
	sum = atoi(argv[1]) + atoi(argv[2]);
	printf("%s+%s=%d\n", argv[1], argv[2], sum);
}