#include<stdio.h>
main()
{
	char moji1[10], moji2[10], data[10];
	int i;
	printf("文字列１を入力：");
	scanf("%s", &moji1[0]);
	printf("文字列２を入力：");
	scanf("%s", &moji2[0]);
	printf("moji1=%s\tmoji2=%s\n入れ替えると\n", moji1, moji2);
	for (i = 0; data[i] = moji1[i]; i++);
	for (i = 0; moji1[i] = moji2[i]; i++);//moji1を空白のdataに一度保存した後に空いたmoji1にmoji2に移す
	for (i = 0; moji2[i] = data[i]; i++);
	printf("moji1=%s\tmoji2=%s\n", moji1, moji2);

}
	
	



