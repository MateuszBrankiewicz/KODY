#include <stdlib.h>
#include <stdio.h>
void czytaj(int x, float tab[]);
void kopia1(int x, float tab[], float tab2[]);
 void kopia2(int x, float *tab[], float *tab3[]);
int main(){
    int x; 
    printf("Podaj wielkosc tablicy"); scanf("%d",&x);
    float tab[x];
    float tab2[x];
    float tab3[x];
    czytaj(x, tab);
    for( int i = 0; i<x; i++){
        printf("%.2f\n", tab[i]);
    }
    kopia1(x, tab, tab2);
    kopia2(x, tab, tab2);
}
void czytaj(int x, float tab[])
{ int i;
    for (i=0; i<x; i++)
{      printf("wpisz liczbe tab[%d]: ", i);
        scanf("%f", &tab[i]);
}}
void kopia1(int x, float tab[], float tab2[]){
    for(int i=0; i<x; i++){
        tab2[i] = tab[i];
       
    }
     for( int i = 0; i<x; i++){
        printf("%.2f\n", tab2[i]);
    }

}
void kopia2(int x, float *tab[], float *tab3[]){
      for (int i = 0; i < x; i++) {
    *(tab3 + i) = *(tab + i);
        }
        for(int i = 0; i<x; i++){
        printf("%.2f\n", tab3[i]);
    }
}
        
        
