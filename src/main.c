#include <stdio.h>

#define PROGRESS_BAR_SIZE 40

char user_input[20];

void print_n_chars(int n, int c) {
    while (n-- > 0) {
        putchar(c);
    }
}

void display_progress_bar(int p) {
    putchar('\r');
    putchar('[');
    print_n_chars(PROGRESS_BAR_SIZE * p / 100, '=');
    print_n_chars(PROGRESS_BAR_SIZE - PROGRESS_BAR_SIZE * p / 100, '-');
    putchar(']');
}

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
            int p;
            for (p = 0; p <= 100; ++p) {
                display_progress_bar(p);
                Sleep(100);
            }
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