#include<stdio.h>
main()
{
	int d[11] = { 10,15,18,23,28,35,47,55,68,78,96 };
	int high,low,mid, s;
	printf("探索値sを入力：");
	scanf("%d", &s);
	high = 0;
	low = 0;
	while (low <= high) {
		mid = (low + high) / 2;
		if (s == d[mid]) {
			break;
		}
		if (s > d[mid]) {
			low = mid + 1;
		}
		else {

			high = mid - 1;
		}
	}
		if (low > high) {
			printf("みつかんねぇよ\n");
		}
		else {
			printf("%dをd[%d]で見つけたぞお", s, mid);
		}

}