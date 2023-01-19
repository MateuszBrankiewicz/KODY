#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define szerokosc 60

void doPrawej(char*);
void doSrodka(char*);

int main() {
char napis[][40] = {"stoi na stacji lokomotywa", "ciezka, ogromna i pot z niej splywa", "tlusta oliwa"};
int i, x;
for (i = 0; i <= 3; i++) {
doPrawej(napis[i]); 
printf("%s\n", napis[i]);
}
for (i = 0; i <= 3; i++) {
doSrodka(napis[i]);
printf("%s\n", napis[i]);
}
return 0;
}

void doPrawej(char tekst[]) {
int x = strlen(tekst);
int i;
for (i = szerokosc - x; i > 0; i--) printf(" ");
}

void doSrodka(char tekst[]) {
int x = strlen(tekst);
int i;
for (i = szerokosc / 2 - x / 2; i > 0; i--) printf(" ");
}