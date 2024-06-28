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
	int i,j,g;
	g = 0;
	struct fruit kudamono[3] = { {"peach",300,5,3,0},{"grape",200,4,10,0},{"watermelon",1500,5,8,0}};
	for (j = 0; j < 3; j++) {
		kudamono[j].total = kudamono[j].price * kudamono[j].number;
		
		g += kudamono[j].total;
		printf("¤•i–¼F\t%s\n", kudamono[j].name);
		printf("‰¿ŠiF\t\t%d‰~\t", kudamono[j].price);
		printf("‚¨‘E‚ß“xF\t");
		for (i = 0; i < kudamono[j].point; i++) {
			printf("š ");
		}
		printf("\nŒÂ”F\t\t%dŒÂ\t", kudamono[j].number);
		printf("‹àŠzF\t\t%d-\n\n", kudamono[j].total);


	}
	printf("‡Œv‹àŠz%d-", g);

}