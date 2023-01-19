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
    char quit;
    int l;
    while(quit == FALSE){
        gets(tab);
        l = strlen(tab);
        for (int i = 0; i <l ; i++){
            if(tab[i]  == 'q'){
                if (tab[i+1] == 'u'){
                    if (tab[i+2]== 'i'){
                        if(tab[i+3]== 't'){
                            quit = TRUE;
                        }
                    }
                }
            }
            else quit == FALSE;
        }
    }
}