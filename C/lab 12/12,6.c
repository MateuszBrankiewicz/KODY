#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void toUpper(char *str);

int main() {
    char input[100];
    printf("Wprowadz tekst: ");
    gets(input);
    
    printf("Wprowadzony tekst: %s\n", input);
    toUpper(input);
    printf("Zmieniony tekst: %s\n", input);
    return 0;
}

void toUpper(char *str) {
    int i = 0;
    while (str[i]) {
        str[i] = toupper(str[i]);
        i++;
    }
}