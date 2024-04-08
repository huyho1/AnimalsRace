// FILE:  race.c
// IMPLEMENTS: ANIMALS.H
#include "animals.h"  

int main() 
{
    //Get seed from user in terminal and set random number seed
    int seed;
    printf("Please enter a random number seed.\n");
    scanf("%d", &seed);
    srand(seed);
    
    //Initialize and set variables
    int posHare = 0;
    int posTort = 0;
    int posBee = 0;
    int time = 0;
    int currentWinner = 100; //random number
    
    //The race
    while (posHare < 70 && posTort < 70 && posBee < 70) {
        posHare = update_hare (posHare);
        posTort = update_tortoise(posTort);
        posBee = update_bee(posBee);
        time++;

        //If the hare overtakes both
        if (posHare > posTort && posHare > posBee) {
            if (currentWinner != 1) {
                currentWinner = 1;
                printf("At t = %d, the hare (square %d) has taken the lead.\n", time, posHare);
            }
        }

        //If the tortoise overtakes both
        if (posTort > posHare && posTort > posBee) {
            if (currentWinner != 0) {
                currentWinner = 0;
                printf("At t = %d, the tortoise (square %d) has taken the lead.\n", time, posTort);
            }
        }

        //If the bee overtakes both
        if (posBee > posHare && posBee > posTort) {
            if (currentWinner != 2) {
                currentWinner = 2;
                printf("At t = %d, the bee (square %d) has taken the lead.\n", time, posBee);
            }
        }

        //Declares the winners
        if (posHare >= 70) {
            printf("After %d seconds, the hare wins!!\n", time);
        }
        if (posTort >= 70) {
            printf("After %d seconds, the tortoise wins!!\n", time);
        }
        if (posBee >= 70) {
            printf("After %d seconds, the bee wins!!\n", time);
        }
    }
    return 0;
}
