#include <stdio.h>
#include <string.h>
void odwroc(char *string);


int main() {
    char string[100];
    printf("Podaj stringa: ");
    gets(string);
    odwroc(string);
    printf("Odwrocony string: %s\n", string);
    return 0;
}
void odwroc(char *string) {
    int i, j;
    int len = strlen(string);
    char temp;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
}
