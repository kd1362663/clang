#include<stdio.h>
#define DATA_END -1
struct ken {
	int code;
	char name[20];
	struct ken* next;
};
main()
{
	struct ken ken_data[] = {{1,"kCΉ",NULL},
							{2,"ΒX§",NULL},
							{3,"βθ§",NULL},
							{4,"{ι§",NULL},
							{5,"Hc§",NULL},
							{6,"R`§",NULL},
							{7,"§",NULL},
							{DATA_END,"",NULL},
							{28,"ΊΙ§",NULL}};
	struct ken* p, * wp;
	//NΜέθ
	p = wp = ken_data;
	do {
		p++;
		wp->next = p;
		wp = p;

	} while (p->code != DATA_END);
	//kCΉΜnextoΜlπΊΙ§ΜAhXΙΟX΅Δ
	//ΊΙ§ΜnextoΜlπΒX§ΜAhXΙ·ι
	//@|C^Ιken_dataΜζͺAhXikCΉjπγό
	p = ken_data;
	//AkCΉΜp->nextΙΊΙ§ΜAhXπγό
	p->next = p + 8;
	//BΊΙ§Μp->nextΙΒX§ΜAhXπγό
	(p+8)->next = p +1 ;
	//NΜ\¦
	for (p = ken_data; p->code != DATA_END; p = p->next) {
		printf("code=%d name=%s\n", p->code, p->name);
	}
}