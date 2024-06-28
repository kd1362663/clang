#include <stdio.h>
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day date;
	char blood[5];
};
main()
{
	struct profile student[5] = { {"a",1000,1,1,"A"},{"b",2000,2,2,"B"},{"c",3000,2,23,"O"},{"d",3000,3,23,"AB"},{"e",3500,8,23,"B"} };
	struct profile* p;
	int i;
	for (p=student,i = 0; i < 5; i++, p++) {
		if (p->date.tuki == 2) {
			printf("%s--%d”N%dŒŽ%d“ú¶ ŒŒ‰tŒ^-%sŒ^\n", p->name, p->date.nen, p->date.tuki, p->date.hi, p->blood);

		}
	}
	




}