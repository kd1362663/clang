#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
main()
{
	int r,a,b;
	srand(time(0));
	r = rand() % 3;
	printf("�����o���܂����H\n�i�P�F�O�[�@�Q�F�`���L�@�R�F�p�[�j��");
	scanf("%d", &b);
		if (b == 1) {
			printf("�v���C���[�́A�O�[�ł��B");
		}
		else {
			if (b == 2) {
				printf("�v���C���[�́A�`���L�ł��B");
			}
			else {
				if (b == 3) {
					printf("�v���C���[�́A�p�[�ł��B");
				}
			}
		}
		printf("\n");
		if (r == 0) {
			printf("CP�́A�O�[�ł��B");
		}
		else {
			if (r== 1) {
				printf("CP�́A�`���L�ł��B");
			}
			else {
				if (r == 2) {
					printf("CP�́A�p�[�ł��B");
				}
			}
		}
		printf("\n");
		if (b == 1 && r == 0) {
			printf("����������");
	}
		if (b == 1 && r == 1) {
			printf("�v���C���[�̏�������");
		}
		if (b == 1 && r == 2) {
			printf("CP�̏�������");
		}
		if (b == 2 && r == 0) {
			printf("CP�̏�������");
		}
		if (b == 2 && r == 1) {
			printf("����������");
		}
		if (b == 2 && r == 2) {
			printf("�v���C���[�̏�������");
		}
		if (b == 3 && r == 0) {
			printf("�v���C���[�̏�������");
		}
		if (b == 3 && r == 1) {
			printf("CP�̏�������");
		}
		if (b == 3 && r == 2) {
			printf("����������");
		}
	

	
}