#include <stdio.h>
main()
{
	int a,i, sum;
	sum = 0;
	i = 0;
	printf("�����F");
	while (scanf("%d", &a) != EOF) {
		sum += a;
		i++;
		printf("�����F");
	}
	printf("���v��%d ���ρ�%.2f\n", sum, (float)sum / i);

}