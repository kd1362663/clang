#include<stdio.h>
main()
{
	float  box[3];
	int i;
	for (i = 0; i < 3; i++) {
		printf("��������́F");
		scanf("%f", &box[i]);
	}
	printf("���v��%.2f�ł�\n���ς�%.2f�ł�", box[0] + box[1] + box[2], (box[0] + box[1] + box[2]) / 3);

	//���̏��printf��float�̂Ƃ��ɍ��v�̕ϐ���ǉ����Ă�����΂����Ǝv��
	//�Œǉ������ϐ��Ɂ{���ő���������������΂����@sum+=box[i] �Ă���

}