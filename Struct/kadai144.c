#include<stdio.h>
struct fruit {
	char name[30];
	int price;
	int point;
	int number;
	int total;
};
main()
{
	int i;
	struct fruit kudamono = { "peach",300,5,3,0 };
	struct fruit* p;
	p = &kudamono;
	p->total = p->price * p->number;
	printf("���i���F\t%s\n", p->name);
	printf("���i�F\t\t%d�~\n", p->price);
	printf("���E�ߓx�F\t");
	for (i = 0; i < p->point; i++) {
		printf("��");
	}
	printf("\n���F\t\t%d��\n", p->number);
	printf("���z�F\t\t��%d\n", p->total);




}