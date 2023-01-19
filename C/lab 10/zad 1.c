#include <stdio.h>
#include <stdlib.h>
void czytaj(int n, float a[]);
 float roznica(int n, float T[]);
 float suma(int n, float T[]);
 int licz(int n,int liczba, float T[]);
 void wyswietl(int n, float T[]);
 int main ( ){ 
    int i, n, liczba;
    printf("Podaj liczbe elementów talbicy"); scanf("%d", &n);
    float T[n];
    czytaj(n, T);
    wyswietl(n, T);
    printf("Podaj liczbe ktora chcesz szukac"); scanf("%d",&liczba);
    printf("Najwieksza liczba wynosi: %f\n", roznica(n, T));
    printf("Powtorzyło się tyle liczb: %d\n", licz(n,j,T));
    printf("Suma wynosi: %f\n" ,suma(n,T));
    }
void czytaj(int n, float a[])
 { int i;
    for (i=0; i<n; i++)
 {      printf("wpisz liczbe a[%d]: ", i);
        scanf("%f", &a[i]); 
 }
 }
  float roznica(int n, float T[])//???
 { int i;
    float max=T[0];
    
    for (i=1; i<n; i++)
 {  if (T[i] > max ) max=T[i];
       }
       return max;
 }
int licz(int n,int liczba, float T[]){
    int ile;
   int i;
    for (i=0; i<n; i++)
        if(T[i]== liczba){
           
        ile++;}
        return ile;
}

void wyswietl(int n, float T[]){
    int i;
    for( i = 0; i<n; i++){
        printf("%.2f\n", T[i]);
    }}

float suma(int n, float T[]){
    float wynik;
    wynik = 0;
    for (int i = 0; i<n; i++){
        wynik += T[i];
    }
    return wynik;
}