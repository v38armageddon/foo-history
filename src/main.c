#include <stdio.h>

char user_input[20];

int main(void) {
    printf("Foo History\n\n");
    printf("Foo History is a console text videogame.\n");
    printf("During the game, you may be not able to save your progression.\n");
    printf("Do you want to continue? [Y|N]\n");
    while (1) {
        printf("> ");
        scanf("%s", user_input);
        if (user_input == "y") {
            printf("Let's start the game!\n");
        }
        else if (user_input == "n") {
            printf("Okay, have a good day!\n");
            break;
        }
        else {
            // Do nothing but repeat the same thing
        }
    }
}