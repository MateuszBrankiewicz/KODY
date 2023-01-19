#include <stdio.h>
#include <stdlib.h>
void czytaj(int n, float a[]);//???
 float roznica(int n, float T[]);//???
 int nowa(int n, float A[], float B[]);//???
 int main ( ){ 
    int i, n, k;
    printf("Program wczytuje liczby do tablicy,\n");
    printf( "wyswietla roznicę pomiedzy najwiekszym");
    printf( " i najmniejszym elementem tablicy,\n");
    printf( "przepisuje liczby dodatnie do nowejtablicy\n");
    printf( "oraz wyswietla te tablice\n\n");
    printf("Wpisz liczbe elementow tablicy: ");
    scanf("%d", &n);
    float T[n]; //???
    float NT[n]; //???
    czytaj(n, T); //???
    printf ("max-min=%f \n",roznica(n, T)); //???
    k = nowa(n, T, NT); //???
    printf ("\nNowa tablica \n");
     for (i=0; i<k; i++)
        printf ("%.2f\n", NT[i]); //???
        return 0;
 }
 void czytaj(int n, float a[])//???
 { int i;
    for (i=0; i<n; i++)
 {      printf("wpisz liczbe a[%d]: ", i);
        scanf("%f", &a[i]); //???
 }
 }
 float roznica(int n, float T[])//???
 { int i;
    float max, min=T[0];
    max=min;
    for (i=1; i<n; i++)
 {  if (T[i] > max ) max=T[i];
        else
    if (T[i] < min ) min=T[i];
 }
 return max-min;
 }
 int nowa(int n, float A[], float B[])//???
 { int i, j=0;
    for (i=0; i<n; i++)
    if (A[i] > 0)
    { B[j] = A[i];
    j++;
 }
    return j;
 }