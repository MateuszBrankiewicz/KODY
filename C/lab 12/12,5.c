#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int ile = 0;
    char wyrazy [][50] = {"Biblioteka", "string.h", "pozwala", "na",
"zastosowanie", "funkcji", "do", "lancuchow", "znakowych"} ;
    char zdanie [1] [90];
    // for(int i = 0; i < 9; i++){
    //     printf("Podaj wyrazy "); gets(wyrazy[i]);
    // }
    for (int i = 0; i <9 ; i++){
        strcat(wyrazy[i], " ");
        
    }
    for(int i = 0; i < 1; i++){
       for(int j = 0;j<9; j++){
        strcat(zdanie[i], wyrazy[j]);
        
       }
    }
    printf("%s" , zdanie[0]);
    ile = strlen(zdanie[0]);
    printf("Dlugosc %d", ile);
    scanf("%d", &ile);
}