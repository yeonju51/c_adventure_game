#ifndef GLOBAL_H
#define GLOBAL_H

#include "playerinfo.h"

#define PLAYER_STATS_COUNT 3
#define MONSTER_COUNT 6
#define STR_SIZE 20

int rollDice;
int trapCheck;
int level; //게임 난이도를 입력할 변수

struct playerInfo player1;
char* playerValues[PLAYER_STATS_COUNT];

char* monster[MONSTER_COUNT]; // 난이도 세분화를 위한 몬스터 추가(thanos, joker)
int monsterStrenght[MONSTER_COUNT]; // 몬스터 스텟 세분화
int monsterLife[MONSTER_COUNT]; // 몬스터 생명 세분화

int val;
int checkVal;
int reset;
char str[STR_SIZE];

#endif // GLOBAL_H