#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TRUE 1
#define FALSE 0

void sprawdzam(char tab[]);

int main() {
    char tab[50];
    while (TRUE) {
        printf("Podaj znak(jesli dasz quit to zakonczy program)");
        scanf("%s", tab);
        sprawdzam(tab);
    }
    return 0;
}

void sprawdzam(char tab[]) {
    if (strcmp(tab, "quit") == 0) {
        printf("Zamykamy program\n");
        exit(0);
    }
    printf("Podales: %s\n", tab);
}
