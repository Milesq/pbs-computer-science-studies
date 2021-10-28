#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#include "game.h"

// void removeElement(void* beg, size_t i, size_t length, size_t elementSize) {
//     memmove(beg + i * elementSize, beg + i * elementSize + 1, elementSize * (length - i - 1));
// }

void removeElement(Player *array, int index, int array_length) {
   int i;
   for(i = index; i < array_length - 1; i++) array[i] = array[i + 1];
}

bool isEven(Player player) {
    return player.value % 2 == 0;
}

bool isPrime(Player player) {
    for (size_t i = 2; i <= player.value / 2; ++i) {
        if (player.value % i == 0)
            return false;
    }

    return true;
}

bool randomJudge(Player player) {
    return rand() % 2;
}

Judge judges[] = {isEven, isPrime, randomJudge, NULL};

bool judgePlayer(Player player) {
    int result = 0;

    for (size_t i = 0; judges[i] != NULL; ++i) {
        bool a = judges[i](player);

        if (a) result++;
        else result--;
    }

    return result > 0;
}

size_t playRound(Player players[], size_t size, void(*onDecision)(Player, bool)) {
    int numberOfSurvivors = size;

    for (size_t i = 0; i < size; i++) {
        Player currentPlayer = players[i];
        players[i].value /= rand() % 3 + 1;

        bool result = judgePlayer(currentPlayer);
        onDecision(currentPlayer, result);

        if (!result) {
            removeElement(players, i, size);
            numberOfSurvivors--;
        }
    }

    return numberOfSurvivors;
}

void play(Player players[], size_t size, void(*onDecision)(Player, bool)) {
    for (int i = 0; i < size; ++i)
        printf("%d\n", players[i].id);

    size = playRound(players, size, onDecision);

    printf("\n");
    for (int i = 0; i < size; ++i)
        printf("%d\n", players[i].id);
}
