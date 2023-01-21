#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct ankieta{
    char imie[20];
    char nazwisko[20];
    char ulica[50];
    int nrdomu;
    int nrmieszkania;
    int wiek;
    char plec[10];
};
void wczytaj(struct ankieta an[], int size);
void wyswietl(struct ankieta an[], int size);
void wspollokatorzy(struct ankieta an[], int size, char ulica[], int nrdomu, int nrmieszkania);
void mezczyzni(struct ankieta an[], int size, char ulica[]);
int main(){
    int nrdomu, nrmieszkania;
    int size;
    char ulica[50];
    printf("Podaj liczbe ankietowanych"); scanf("%d", &size);
    struct ankieta an[size];
    wczytaj(an, size);
    wyswietl(an, size);
    printf("Podaj dom ktory chcesz sprawdzic ulica nr domu mieszkania"); gets(ulica); scanf("%d", &nrdomu); scanf("%d", &nrmieszkania);
    wspollokatorzy(an, size, ulica, nrdomu, nrmieszkania);
    fflush(stdin);
    printf("Podaj ulice na której chcesz sprawdzic ile jest mezczyzn <18;60>"); gets(ulica);
    mezczyzni(an,size,ulica);
}
void wczytaj(struct ankieta an[], int size){
    for(int i = 0; i < size; i++){
        fflush(stdin);
        printf("Podaj imie"); gets(an[i].imie);
        fflush(stdin);
        printf("Podaj nazwisko"); gets(an[i].nazwisko);
        fflush(stdin);
        printf("Podaj adres: ulica "); gets(an[i].ulica);
        fflush(stdin);
        printf("nr domu "); scanf("%d", &an[i].nrdomu);
        printf("Nr mieszkania"); scanf("%d", &an[i].nrmieszkania);
        fflush(stdin);
        printf("Podaj wiek"); scanf("%d", &an[i].wiek);
        fflush(stdin);
        printf("Podaj plec"); gets(an[i].plec);
        
    }
}
void wyswietl(struct ankieta an[], int size){
    for (int i = 0; i < size; i++){
        printf("Imie: %s\n", an[i].imie);
        printf("Nazwisko: %s\n", an[i].nazwisko);
        printf("Ulica: %s\n", an[i].ulica);
        printf("Nr domu: %d\n", an[i].nrdomu);
        printf("Nr mieszkania: %d\n", an[i].nrmieszkania);
        printf("Wiek: %d\n", an[i].wiek);
        printf("Plec: %s\n", an[i].plec);
    }
}
void wspollokatorzy(struct ankieta an[], int size, char ulica[], int nrdomu, int nrmieszkania){
    int ile = 0;
    for (int i = 0; i < size; i++){
        if (stricmp(an[i].ulica, ulica)== 0 && an[i].nrdomu == nrdomu && an[i].nrmieszkania == nrmieszkania ){
            ile++;
        }
        
    }
    printf("Pod podanym adresem mieszka %d osob", ile);
}
void mezczyzni(struct ankieta an[], int size, char ulica[]){
    int ile = 0;
    for(int i = 0; i < size; i++){
        
        if(stricmp(an[i].ulica,ulica) == 0 && an[i].wiek >= 18 && an[i].wiek <= 60){
            ile++;
        }
    }
    printf("Mieszka %d mezczyzn", ile);
}