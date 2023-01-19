#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>
void doprawej(int);
void srodek(int);

int main(){
    int i;
    setlocale(LC_ALL, " ");
    char tab[][100] = {"Stoi na stacji lokomotywa","Ciężka, ogromna i pot z niej spływa","Tłusta oliwa","Stoi i sapie, dyszy i dmucha","Żar z rozgrzanego jej brzucha bucha:","Buch - jak gorąco!","Uch - jak gorąco!"};
    for (int i = 0; i<7; i++){
        doprawej(strlen(tab[i]));
        puts(tab[i]);
        printf("\n");
    }
    for (int i = 0; i<7; i++){
        srodek(strlen(tab[i]));
        puts(tab[i]);
        printf("\n");
    }
    scanf("%d",&i);
}

void doprawej(int n){
    int k;
    for(k = 100-n; k>0; k--){
        printf(" ");
    }

}

void srodek(int n){
    int k;
    for(k = (100-n)/2; k>0; k--){
        printf(" ");
    }

}