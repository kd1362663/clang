#include<stdio.h>
main()
{
	char* p_tbl[4] = { "Programming2","Algorithm","Programming1","C"},*a;
	int i,j;
	for (i = 0; i < 3; i++){
		for (j = i+1; j <4; j++) {
			if(strcmp(p_tbl[i],p_tbl[j])==1) {
				a = p_tbl[j];
				p_tbl[j] = p_tbl[i];
				p_tbl[i] = a;
			}
		}
		
	}
	for (i = 0; i < 4; i++) {
		printf("%s\n", p_tbl[i]);
	}

}