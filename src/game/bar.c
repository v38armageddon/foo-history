#include <stdio.h>
#include "bar.h"

char user_input[20];
char name[20];

void bar() {
    // The name can be useful for the future, I promise, I don't sell your data. It's for the game purpose. Trust me ;)
    printf("Your name?\n");
    printf("> ");
    scanf("%s", name);
    printf("Okay, your name is: %s", name "\n\n");
    printf("System: It's 8:00PM, you decided to go to your favourite place: the 'Foo-Bar'.\n");
    printf("System: You go to the bar, the barman ask:\n");
    printf("Barman: Hey%s", name, "! What do you want this time?\n");
    printf("System: You can choose the following list: \n");
    printf("1: Whiskey\n 2: Vodka\n 3: Mojito\n 4: Wine\n");
    while (1) {
        printf("> ");
        scanf("%s", user_input);
        switch (1, 2, 3, 4) {
        case 1:
            printf(name, ": I want to take a whiskey please.");
            printf("Barman: Whiskey here you go!");
        case 2:
            printf(name, ": I want to take vodka please.");
            printf("Barman: Vodka here you go!");
        case 3:
            printf(name, ": I want to take a mojito please.");
            printf("Barman: Mojito here you go!");
        case 4:
            printf(name, ": I want to take wine please.");
            printf("Barman: Wine here you go!");
        default:
            printf(name, ": Nothing.");
            printf("Barman: Nothing? Are you okay my friend?")
        }
    }
    
}