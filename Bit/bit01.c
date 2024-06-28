#include<stdio.h>

enum BitState
{
	Base=0,				//00000000
	Poison=1<<0,		//00000001
	Sleep=1<<1,			//00000010
	Paraysis=1<<2,		//00000100
	Burn=1<<3,			//00001000
	AtkUp=1<<4,			//00010000
	AtkDown=1<<5,		//00100000
};
typedef unsigned int UINT;
void displayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);

main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	displayStatus(MyState);
	ClearFlag(&MyState);
	displayStatus(MyState);
}

void displayStatus(UINT s) {
	printf("****Œ»Ý‚Ìó‘Ô****\n");
	if (s & Poison) {
		printf("“Å\n");
	}
	if (s & Sleep) {
		printf("‡–°\n");
	}
	if (s & Paraysis) {
		printf("–ƒáƒ\n");
	}
	if (s & Burn) {
		printf("‰Î\n");
	}
	if (s & AtkUp) {
		printf("UŒ‚—Íã¸\n");
	}
	if (s & AtkDown) {
		printf("UŒ‚—ÍŒ¸­\n");
	}
	if (s == Base) {
		printf("’Êíó‘Ô\n");
	}
	printf("******************\n");
	
}
void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		printf("‚Ç‚Ìó‘ÔˆÙí‚É‚µ‚Ü‚·‚©H\n");
		printf("‚PF“Å‚QF‡–°‚RF–ƒáƒ‚SF‰Î‚TFUŒ‚—Íã¸‚UFUŒ‚—ÍŒ¸­‚OFI—¹„");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paraysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;

		}
	}
}
void ClearFlag(UINT* s) {
	int a;
	while (1) {
		printf("‚Ç‚Ìó‘ÔˆÙí‚ð‰ðœ‚µ‚Ü‚·‚©\n");
		printf("‚PF“Å‚QF‡–°‚RF–ƒáƒ‚SF‰Î‚TFUŒ‚—Íã¸‚UFUŒ‚—ÍŒ¸­‚VF‘S‰ðœ‚OFI—¹„");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paraysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:
			*s = Base;
			break;
		}
	}
}