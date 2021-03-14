#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// custom header file
#include "./header/game.h"

int main() {

    // reset the terminal colors
    reset();
    
    int number, divider;
    char name[20];
    
    // welcome message
    printf("Welcome %s\n", yourName(name));
    
    // generate random number
    srand(time(0));
    divider = selectLevel();
    number = rand()%divider + 1;
    
    // let's start the game
    playGame(number, divider);
    
    // game over
    printf("GAME OVER !!!\n");
    return 0;
}