#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
main()
{
	int a,r;
	char w;
	srand(time(0));
	printf("���Ȃ�P�O�O�A�K�`����������I�I�I\n\t�������H�H�H");
	scanf("%c", &w);
	if (w == 'g'); {


		for (a = 0; a <= 100; a++) {
			r = rand() % 1000;
			if (r <= 1) {
				printf("�^�ǂ����ł́H\n");
			}
			else {
				if (r <= 100) {
					printf("�܂��������Ƃ��肻������\n");
				}
				else {
					if (r <= 500) {
						printf("���Ƃ������Ȃ����x�����\n");
					}
					else {

						printf("�Q�Ƃ�\n");
					}
				}
			}
		}
	}
}