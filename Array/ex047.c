#include<stdio.h>
main()
{
	float x[3][2],g;
	int a, b;
	for (a = 0; a < 3; a++) {
		for (g = 0, b = 0; b < 2; b++) {
			printf("x[%d][%d]=", a, b);
			scanf("%f", &x[a][b]);
			g += x[a][b];
		}
		if (a == 0) {
			printf("0行目の平均＝%.2f\n\n", g / 2);//printf("%d行目の平均 = %.2f\n\n", i, sum / 2);
		}　　　　　　　　　　　　　　　　　　　　　//これでできるっぽいよ、泣いちゃう
		else {
			if (a == 1) {
				printf("1行目の平均＝%.2f\n\n", g / 2);

			}
			else {
				if (a == 2) {
					printf("2行目の平均＝%.2f\n\n", g / 2);
				}
			
			}
		}
		

	}
}