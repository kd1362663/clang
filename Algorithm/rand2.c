#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
main()
{
	int dice;
	srand(time(0));
	dise = rand()%6+1;//�ǂ�Ȑ��ł��U�Ŋ���Ƃ��܂肪�O�`�T�̒l�ɂȂ邱�Ƃ𗘗p
	printf("�T�C�R����%d�ł�\n", dice);
}