#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#include "tools.h"
#include "global.h"
#include "utils.h"

int dice()
{
    // 현재 시간을 이용하여 시드를 초기화합니다.
    srand((unsigned int)time(NULL)); 
    int dice = (rand() % DICE_FACE) + 1; 
    return dice;
}


int statsCheck(int playerStats, int diceRoll)
{
    int result;
    result = 1;
    if (playerStats < diceRoll)
    {
        result = 0;
    }
    return result;
}

//입력한 난이도 받기
int getRandMonster(int monster_lev) 
{
    int monster = 0; 
 
    #ifdef _WIN32
        SYSTEMTIME st;
        GetSystemTime(&st);
        srand((unsigned int)(st.wMilliseconds));
    #else
        struct timeval time;
        gettimeofday(&time, NULL);
        srand((time.tv_sec * 1000) + (time.tv_usec / 1000));
    #endif

    switch (monster_lev) 
    {
    case 1:
        monster = (rand() % 2);
        break;
    case 2:
        monster = (rand() % 2) + 2;
        break;
    case 3:
        monster = (rand() % 2) + 4;
        break;
    default:
        break;
    }
    return monster;
}

void checkForExit(const char* check)  
{
    if (*check == 'f' || *check == 'F') 
    {
        printf("You chose to exit the game. Goodbye!\n");
        exit(0);
    } 
}

void title(const char* title)
{
    printf("\n********** %s **********\n\n", title);
}


