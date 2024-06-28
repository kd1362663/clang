#include<stdio.h>
main()
{
	float  box[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("実数を入力：");
		scanf("%f", &box[i]);
	}
	printf("合計は%.2fです\n平均は%.2fです", box[0] + box[1] + box[2], (box[0] + box[1] + box[2]) / 3);

	//この上のprintfはfloatのとこに合計の変数を追加してあげればいいと思う
	//で追加した変数に＋＝で足し続けるやつをすればおｋ　sum+=box[i] てきな

}