/*
 *
 * Game Time with Minutes
 * Read the start time and end time of a game, in hours and minutes 
 * (initial hour, initial minute, final hour, final minute). Then 
 * print the duration of the game, knowing that the game can begin 
 * in a day and finish in another day,
 *
 * Obs.: With a maximum game time of 24 hours and the minimum 
 * game time of 1 minute.
 * Input
 *
 * Four integer numbers representing the start and end time of the game.
 * Output
 *
 * Print the duration of the game in hours and minutes, in this format: 
 * “O JOGO DUROU XXX HORA(S) E YYY MINUTO(S)” . Which means: the game 
 * lasted XXX hour(s) and YYY minutes.
 */

#include <stdio.h>

int main(void) {
    const char *GAME_DURATION = "O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n";
    int gameTime[4] = {0};
    int gameHours = 0;
    int gameMinutes = 0;
    for (int i = 0; i < 4; i++) {
        scanf("%d", &gameTime[i]);
    }
    if (gameTime[0] == gameTime[2]) {
        if (gameTime[1] >= gameTime[3]) {
            gameHours = 24;
        }
    } else if (gameTime[0] > gameTime[2]) {
        gameHours = gameTime[2] - gameTime[0] + 24;
    } else {
        gameHours = gameTime[2] - gameTime[0];
    }
    if (gameTime[1] > gameTime[3]) {
        gameHours--;
        gameMinutes = (gameTime[3] - gameTime[1]) + 60;
    } else
        gameMinutes = (gameTime[3] - gameTime[1]);
    printf(GAME_DURATION, gameHours, gameMinutes);
    return 0;
}
