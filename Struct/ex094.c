#include <stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
main()
{
	struct profile student[5];
	struct profile* p;
	int i;
	for (p=student,i = 0; i < 5; i++, p++) {
		printf("%dl–Ú(–¼‘O)F",i+1);
		scanf("%s", p->name);
		printf("%dl–Ú(¶”NŒŽ“ú)F",i+1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%dl–Ú(ŒŒ‰tŒ^)F",i+1);
		scanf("%s", p->blood);
	}
	for (p=student,i = 0; i < 5; i++, p++) {
		if (strcmp(p->blood,"A") == 0) {
			printf("%s--%d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^-%sŒ^\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);

		}
	}
	




}