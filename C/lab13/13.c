#include <stdio.h>
#include <stdlib.h>



struct place wczytaj();
int main(){
    struct place{
    char imie[15];
    char nazwisko[25];
    int liczba_godzin;
    int stawka;
    float premia;
    float wyplata;}
    for (int i=0l i<2; i++){
    
    printf("Podaj imie"); fgets(place.imie, 15, stdin);
    printf("Podaj nazwisko"); fgets(place.nazwisko, 25, stdin);
    printf("Podaj liczbe godzin"); scanf("%d", &place.liczba_godzin);
    printf("Podaj stawke"); scanf("%d", &place.stawka);
    printf("Podaj premie"); scanf("%f", &place.premia);
    place.wyplata = place.liczba_godzin * place.stawka + place.premia;
    }
printf("%s %s %d %d %f %f \n", pr.imie, pr.nazwisko, pr.liczba_godzin, pr.stawka, pr.premia ,pr.wyplata);

}
    
