#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "utils.h"
#include "game.h"

void logPlayerInfo(Player player, bool didPass) {
    char* message = didPass ? "survived" : "has been eliminated";
    // printf("Player %d %s with value %d\n\n", player.id, message, player.value);
}

void main() {
    srand(time(NULL));
    size_t numberOfPlayers;

    printf("Podaj liczbe graczy: ");
    scanf("%zu", &numberOfPlayers);
    printf("\n\n");

    Player* players = malloc(sizeof(Player) * numberOfPlayers);

    for (size_t i = 0; i < numberOfPlayers; i++) {
        players[i].id = i + 1; // add one in order to start from 1
        players[i].value = rand() * rand();
    }

    play(players, numberOfPlayers, logPlayerInfo);

    free(players);
    players = NULL;
}
