#include<stdio.h>
main()
{
	int max_score, score = 0;
	char max_name[20],ch, name[20];
	FILE* fp;
	if (fp = fopen("score.txt", "r")) {
		fscanf(fp, "%s%d", &max_name, &max_score);
		fclose(fp);
		printf("最高得点　名前：%s ハイスコア：%d\n", max_name, max_score);
	}
	else {
		printf("ファイルが読み取れないよぉ\n");
		return;
	}

	printf("プレイヤー名を入力：");
	scanf("%s", &name);
	while (1) {
		printf("現在のスコア:%d('e'で終了)\n", score);
		ch = getch();
		if (ch == 'e') {
			break;
		}
		score++;
	}
	if (max_score<score) {
		if (fp = fopen("score.txt", "w")) {

			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
			printf("ハイスコア更新！！☆彡\n");

		}
		else {
			printf("ファイルに書き込めません\n");
			return;
		}
	
	}
}