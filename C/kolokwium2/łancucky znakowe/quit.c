#include <stdlib.h>
#include <string.h>
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
    while (sprawdz == TRUE)
    {
        printf("Podaj znak(jesli dasz quit to zakonczy program)");
        gets(tab);
        fflush(stdin);
        if(strcmp(tab, quit) == 0)
            sprawdz = FALSE;
    }


}
