#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void sprawdzam(char tab[]);
#define FALSE 0
#define TRUE 1

int main(){
    char tab[50];
    sprawdzam(tab);

}


void sprawdzam(char tab[]){
    char quit[] = "quit";
    int sprawdz;
    sprawdz = FALSE;
    while(sprawdz == FALSE){
        gets(tab);
        fflush(stdin);
        if(strcmp(tab, quit) == 0){
            sprawdz = TRUE;
        }
    }
}