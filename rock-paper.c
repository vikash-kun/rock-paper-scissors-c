#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    int player, computer;
    char *choices[] = {"Rock", "Paper", "Scissors"};
// seed random number generatoor
srand(time(0));

printf("===Rock, Paper, scissors ===\n");
printf("enter your choice : \n");
printf("1. Rock\n2. paper\n3. scissors\n");
printf("your choice : ");
scanf("%d", &player);

if (player < 1 || player > 3) {
    printf("invalid choice! choose between 1 and 3. \n");
    return 0;

    // computer random choice (1-3)
    computer = (rand() % 3) + 1;

    printf("you chose : %s\n", choices[player - 1]);
    printf("computer  chose : %s\n", choices[computer - 1]);

    // game logic
if (player == computer) {
    printf("result : it's a draw!\n");
} else if ((player == 1 && computer == 3) ||
           (player == 2 && computer == 1) ||
           (player == 3 && computer == 2)) {
            printf("result : you win!\n");
     } else {
        printf("result : computer wins! \n");
     }
     return 0;
}


