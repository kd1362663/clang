#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define Skil_Num 3
#define Mob_Num 3
//符号なし整数をUINTで再定義
typedef unsigned int UINT;

typedef struct {	//Skill型構造体
	char name[20];	//スキル名
	int type;		//スキルの種類（０：HP回復、１：AtkUp、
	int use_mp;		//使用MP量
	int effect;		//スキル効果
}Skill;
typedef struct {	//Spec型構造体
	char name[20];	//名前
	int hp;			//体力
	int atk;		//攻撃力
	int def;		//防御力
	UINT state		//状態
}Spec;
typedef struct {				//Chara型構造体
	Spec sp;					//Spec型構造体変数
	int maxhp;					//最大体力
	int mp;						//魔力
	Skill skl[Skil_Num];		//Skill型構造体配列
}Chara;
typedef struct {				//Chara型構造体
	Spec sp;					//Spec型構造体変数
	int maxhp;					//最大体力
	int mp;						//魔力
	Skill skl[Skil_Num];		//Skill型構造体配列
}Chara;
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
	printf("****現在の状態****\n");
	if (s & Poison) {
		printf("毒\n");
	}
	if (s & Sleep) {
		printf("睡眠\n");
	}
	if (s & Paraysis) {
		printf("麻痺\n");
	}
	if (s & Burn) {
		printf("火傷\n");
	}
	if (s & AtkUp) {
		printf("攻撃力上昇\n");
	}
	if (s & AtkDown) {
		printf("攻撃力減少\n");
	}
	if (s == Base) {
		printf("通常状態\n");
	}
	printf("******************\n");
	
}
void ChangeFlag(UINT* s) {
	int a;
	while (1) {
		printf("どの状態異常にしますか？\n");
		printf("１：毒２：睡眠３：麻痺４：火傷５：攻撃力上昇６：攻撃力減少０：終了＞");
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
		printf("どの状態異常を解除しますか\n");
		printf("１：毒２：睡眠３：麻痺４：火傷５：攻撃力上昇６：攻撃力減少７：全解除０：終了＞");
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