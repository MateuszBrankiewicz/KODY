#include <stdio.h>
#include <stdlib.h>

struct student{
    char imie[15];
    char nazwisko[30];
    int oceny[5];
    float srednia;
};
void wczytaj(struct student tab[],int);
float srednia(struct student tab[],int);
int main(){
    int n;
    printf("Podaj ilosc studentow: "); scanf("%d",&n);
    struct student tab[n];
    wczytaj(tab,n);
    float s = srednia(tab,n);
    printf("Srednia grupy %.2f",s);
return 0;}

void wczytaj(struct student tab[],int n){
    for (int i=0;i<n;i++){
        printf("Podaj imie i nazwisko "); scanf("%s %s",&tab[i].imie,&tab[i].nazwisko);
        for (int j=0;j<5;j++){
            printf("Podaj ocene: "); scanf("%d",&tab[i].oceny[j]);
        }
    }
}
float srednia(struct student tab[],int n){
    float s;
    float w = 0;
    for (int i=0;i<n;i++){
            s = 0;
        for (int j=0;j<5;j++){
            s += tab[i].oceny[j];
        } tab[i].srednia = s/5.;
        w += s;}
    for (int i=0;i<n;i++){
        printf("Srednia %s %s: %.2f",tab[i].imie,tab[i].nazwisko,tab[i].srednia);
    }
    w = w/(n*5);
    return w;}