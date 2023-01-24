#include <stdio.h>
#include <string.h>


void sortuj(char wyrazy[5][4]);
int main() {
    char wyrazy[5][4];
    for (int i = 0; i < 5; i++) {
        printf("Podaj wyraz %d: ", i + 1);
        gets(wyrazy[i]);
        fflush(stdin);
    }
    sortuj(wyrazy);
    printf("Posortowane wyrazy: \n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", wyrazy[i]);
    }
    return 0;
    system("PAUSE");
}
void sortuj(char wyrazy[5][4]) {
    char temp[4];
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(wyrazy[i], wyrazy[j]) > 0) {
                strcpy(temp, wyrazy[i]);
                strcpy(wyrazy[i], wyrazy[j]);
                strcpy(wyrazy[j], temp);
            }
        }
    }
}
