#include <stdlib.h>
#include <stdio.h>
#define TRUE 1
#define FALSE 0

void sprawdzam (char tab[], char quit[]);

int main(){
    char tab[50];
    char quit [] = "quit";
    sprawdzam(tab, quit);
}

void sprawdzam (char tab[], char quit[]){
    int sprawdz = TRUE;
    int i;
    while (sprawdz == TRUE)
    {
        printf("Podaj znak(jesli dasz quit to zakonczy program)");
        gets(tab);
        fflush(stdin);
        for (i = 0; i < strlen(quit); i++)
        {
            if (tab[i] != quit[i])
                break;
            if (i == strlen(quit) - 1)
                sprawdz = FALSE;
        }
    }
}
