#include<stdio.h>
#define DATA_END -1
struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken ken_data[] = {{1,"–kŠC“¹",NULL},
							{2,"ÂXŒ§",NULL},
							{3,"ŠâŽèŒ§",NULL},
							{4,"‹{éŒ§",NULL},
							{5,"H“cŒ§",NULL},
							{6,"ŽRŒ`Œ§",NULL},
							{7,"•Ÿ“‡Œ§",NULL},
							{DATA_END,"",NULL},
							{28,"•ºŒÉŒ§",NULL}};
	struct ken* p, * wp;
	//ƒŠƒ“ƒN‚ÌÝ’è
	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;

	} while (p->code != DATA_END);
	//–kŠC“¹‚Ìnextƒƒ“ƒo‚Ì’l‚ð•ºŒÉŒ§‚ÌƒAƒhƒŒƒX‚É•ÏX‚µ‚Ä
	//•ºŒÉŒ§‚Ìnextƒƒ“ƒo‚Ì’l‚ðÂXŒ§‚ÌƒAƒhƒŒƒX‚É‚·‚é
	//‡@ƒ|ƒCƒ“ƒ^‚‚Éken_data‚Ìæ“ªƒAƒhƒŒƒXi–kŠC“¹j‚ð‘ã“ü
	p = ken_data;
	//‡A–kŠC“¹‚Ìp->next‚É•ºŒÉŒ§‚ÌƒAƒhƒŒƒX‚ð‘ã“ü
	p->next = p + 8;
	//‡B•ºŒÉŒ§‚Ìp->next‚ÉÂXŒ§‚ÌƒAƒhƒŒƒX‚ð‘ã“ü
	(p+8)->next = p +1 ;
	//ƒŠƒ“ƒN‚Ì•\Ž¦
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}
}