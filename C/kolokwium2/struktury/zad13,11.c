#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct studenci{
    char imie[20];
    char nazwisko[20];
    float *oceny;
    float srednia;
    char stypendium[20];

};
void wczytaj(struct studenci st[], int n, int x);
void wyswietl(struct studenci st[], int n, int x);
void przyznanieStypendium(struct studenci st[], int n, int x);
void srednia(struct studenci st[], int n, int x);
int main(){
    int n, x;
    printf("Podaj liczbe studentów"); scanf("%d", &n);
    struct studenci st[n];
    printf("Podaj ilosc ocen: "); scanf("%d", &x);
    
    wczytaj(st, n, x);
    srednia(st, n, x);
    przyznanieStypendium(st, n, x);
    wyswietl(st,n,x);
    

}

void wczytaj(struct studenci st[], int n, int x){
  
    
    for(int i = 0; i < n; i++){
        fflush(stdin);
        printf("Imie: "); gets(st[i].imie);
        printf("Nazwisko: "); gets(st[i].nazwisko);
        
        st[i].oceny = (float *) malloc(x * sizeof(float));
        for(int j = 0; j < x; j++){
            printf("Podaj ocene: "); scanf("%f", (st+i)->oceny+j);
        }
    }


}
void wyswietl(struct studenci st[], int n, int x){
        for (int i = 0; i < n; i++){
        printf("Imie: %s\n", st[i].imie);
        printf("Nazwisko: %s\n", st[i].nazwisko);
        for (int j = 0; j < x; j++){
            printf("Ocena: %0.2f\n", st[i].oceny[j]);
        }
        printf("Srednia: %0.2f\n", st[i].srednia);
        printf("Stypendium %s\n", st[i].stypendium);
    }

}
void przyznanieStypendium(struct studenci st[], int n, int x){
    float warunek;
    char st1[] = {"podwyzszone"};
    char st2 []= {"normalne"};
    char st3[] = {"brak"};
    for (int i = 0; i < n; i++){
        warunek = 0;
        for (int j = 0; j < x; j++){
           warunek += st[i].oceny[j];
        }
        if(warunek == 5*x) {
            strcpy(st[i].stypendium, st1);

            }
        else if(warunek >=4*x && warunek <5*x ){strcpy(st[i].stypendium, st2);
;}
        else{
            strcpy(st[i].stypendium, st3);

        }
    }

}

void srednia(struct studenci st[], int n, int x){
    float suma, ile;

    ile = x;
    for (int i = 0; i < n; i++){
        suma = 0;
     for (int j = 0; j < x; j++){
            suma += st[i].oceny[j];
        }
        st[i].srednia = suma/ile;
        }

}