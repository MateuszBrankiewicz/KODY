#include <stdio.h>
#include <stdlib.h>
struct pracownik{
    char imie[40];
    char nazwisko[40];
    int liczbagodzin;
    float stawka;
    float premia;
    float placa;
    };
void wczytaj(struct pracownik n[],int x);
float kwota(struct pracownik n[],int x);
void placa(struct pracownik n[],int x);
int main(){
    int x;
    printf("Podaj ilosc pracownikow: "); scanf("%d",&x);
    struct pracownik n[x];
    wczytaj(n,x);
    printf("Sumaryczna kwota: %.2f\n",kwota(n,x));
    placa(n,x);
return 0;}

void wczytaj(struct pracownik n[],int x){
    for (int i=0; i<x; i++){
        printf("Podaj imie i nazwisko "); scanf("%s %s",&n[i].imie,&n[i].nazwisko);
        printf("Liczba godzin "); scanf("%d",&n[i].liczbagodzin);
        printf("Stawka "); scanf("%f",&n[i].stawka);
        printf("Premia "); scanf("%f",&n[i].premia);
    }
}

float kwota(struct pracownik n[],int x){
    float k = 0;
    for (int i=0;i<x;i++){
        n[i].placa = n[i].liczbagodzin * (1 + n[i].premia/100) * n[i].stawka;
        k = n[i].placa;
    }
    return k;
}

void placa(struct pracownik n[],int x){
    for (int i=0;i<x;i++){
        printf("Placa %s %s: %.2f\n",n[i].imie,n[i].nazwisko,n[i].placa);
}}