#include <stdio.h>
#include <stdlib.h>
void zaszyfruj(char *lancuch);
void odszyfruj(char *lancuch);

int main() {
    char lancuch[100];
    while (1) {
        printf("Podaj lancuch (albo 'quit' zeby wyjsc): ");
        gets(lancuch);
        fflush(stdin);
        if (strcmp(lancuch, "quit") == 0) {
            break;
        }
        zaszyfruj(lancuch);
        printf("zaszyfrowany lancuch: %s\n", lancuch);
        odszyfruj(lancuch);
        printf("odszyfrowany lancuch: %s\n", lancuch);
    }
    return 0;
}
void zaszyfruj(char *lancuch) {
    int i;
    for (i = 0; lancuch[i] != '\0'; i++) {
        if (lancuch[i] >= 'a' && lancuch[i] <= 'z') {
            lancuch[i] = (lancuch[i] - 'a' + 3) % 26 + 'a';
        } else if (lancuch[i] >= 'A' && lancuch[i] <= 'Z') {
            lancuch[i] = (lancuch[i] - 'A' + 3) % 26 + 'A';
        }
    }
}

void odszyfruj(char *lancuch) {
    int i;
    for (i = 0; lancuch[i] != '\0'; i++) {
        if (lancuch[i] >= 'a' && lancuch[i] <= 'z') {
            lancuch[i] = (lancuch[i] - 'a' - 3 + 26) % 26 + 'a';
        } else if (lancuch[i] >= 'A' && lancuch[i] <= 'Z') {
            lancuch[i] = (lancuch[i] - 'A' - 3 + 26) % 26 + 'A';
        }
    }
}
