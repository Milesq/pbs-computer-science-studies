#ifndef GAME
#define GAME
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int id;
    int value;
} Player;

typedef bool(*Judge)(Player);

bool judgePlayer(Player);

void play(Player[], size_t size, void(*)(Player, bool));

#endif
