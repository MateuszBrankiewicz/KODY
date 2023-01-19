#include <stdlib.h>
#include <stdio.h>
void wczytaj(float *tab, int n);
float najmniejsza(float *tab, int n);
float srednia(float *tab, int n);
void funkcja(int *wylosowana, int n);
int ilerazy(float *tab, int n, float* l);

int main(){
    int n;
    float m, l;
    printf("Podaj wielkosc tablicy"); scanf("%d",&n);
    float tab[n];
    int *wylosowana;
    wczytaj(tab, n);
    printf("Najmniejsza liczba wynosi: %0.2f\n",najmniejsza(tab,n));
    printf("Srednia wynosi: %0.2f\n", srednia(tab, n));
    funkcja(wylosowana, n);
    for(int i = 0; i < n; i++){
    printf("%d", *(wylosowana + i));
    }
    printf("Podaj liczbe ktora chcesz sprawdzic"); scanf("%f", &l);
    printf("Wystapiła: %d", ilerazy(tab, n, &l));

}
void wczytaj(float *tab, int n){
    for(int i  = 0; i<n; i++){
        printf("Podaj liczbe"); scanf("%f",(tab + i));
        
      }
}
float najmniejsza(float *tab, int n){
    float m;
    m = *(tab + 0);
    for(int i = 0; i < n; i++){
        if(m > *(tab + i) ){
            m = *(tab + i) ;
        }}
    return m;
}
float srednia(float *tab, int n){
    float wynik;
    for(int i = 0; i < n; i++){
        wynik += *(tab+i);
    }
    return wynik/n;
}

void funkcja(int *wylosowana, int n){
    for(int i = 0; i < n; i++){
        *(wylosowana + i) = rand()%10;
        }
    for (int i = 0; i < n; i++){
    printf("%d\n", *(wylosowana + i));
    }
}
int ilerazy(float* tab, int n, float *l){
    int ile;
    ile = 0;
    for (int i = 0 ; i < n ; i++){
        if(*(tab+i) == *l){
            ile++;}
    }
    return ile;

}