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
	printf("商品名：\t%s\n", p->name);
	printf("価格：\t\t%d円\n", p->price);
	printf("お薦め度：\t");
	for (i = 0; i < p->point; i++) {
		printf("★");
	}
	printf("\n個数：\t\t%d個\n", p->number);
	printf("金額：\t\t￥%d\n", p->total);




}