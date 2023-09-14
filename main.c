#include <stdio.h>

int main() {
    char mot [] = "chat";
    int longueurmot = 4;
    char lettreadeviner [4];
    char lettrecachees [4];
    int error = 0;
    int lettrerestante = longueurmot;


    for (int i = 0; i < longueurmot; ++i) {
        lettreadeviner[i] = '-';
        lettrecachees[i] = mot [i];
    }

    while (error < 6) {
        printf("Mot secret : ");
        for (int i = 0; i < longueurmot; ++i) {
            printf("%c", lettreadeviner[i]);

        }
        char letter;
        printf("\nDevinez une lettre : ");
        scanf(" %c", &letter);

        int lettretrouver = 0;

        for (int i = 0; i < longueurmot; ++i) {
            if (lettrecachees [i] == letter) {
                lettreadeviner [i] = letter;
                lettretrouver = 1;
                lettrerestante--;
            }
        }


        if (!lettretrouver) {
            error++;
            printf("La lettre n est pas dans le mot. Erreurs : %d/6\n", error);

        }
        if (lettrerestante == 0) {
            printf("Bravo, vous avez gagne");
            break;
        }



    }

    if (error >= 6) {
        printf("Vous avez perdu.");
    }



    return 0;
}