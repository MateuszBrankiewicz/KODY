#include <stdlib.h>
#include <stdio.h>
void czytaj(int x, float tab[]);
char wybierz();
void zamiana(int x, float tab[]);
void odwroc(int x, float tab[], float tab2[]);
void nowatab(int x, float tab[]);
void wyswietl(int x, float tab[]);

int main(){
int x;
printf("Ilosc liczb w tablicy"); scanf("%d", &x);
float tab[x];
float tab2[x];
int z;
    czytaj(x, tab);
   wyswietl(x, tab);  printf("Wybierz opcje:\n"); printf("1.Zamiana miejscami elementu maksymalnego i minimalnego\n");
    printf("2.Zapisanie elementów tablicy w odwrotnej kolejności\n");
    printf("3.Utworzenie nowej tablicy Y zawierającej kwadraty danych liczb, oraz nowej tablicy Z ,zawierającej sześciany danych liczb.");
    scanf("%d", &z);
    if (z==1){
        zamiana(x, tab);
        wyswietl(x, tab);
    }
    else if(z==2){
        odwroc(x, tab, tab2);
        
    }
    else if(z==3){
        nowatab(x, tab);
    }
}

void czytaj(int x, float tab[])
{ int i, *wielkosc;
    for (i=0; i<x; i++)
{      printf("wpisz liczbe a[%d]: ", i);
        scanf("%f", &tab[i]);
}
//  *wielkosc = sizeof(tab) / sizeof(tab[0]);
}


void odwroc(int x, float tab[], float tab2[]){
 int j = 0;
 
    j =x -1  ;
    for(int i = 0; i < x; i++){
        tab2[j] = tab[i];
        j--;
    }
    for( int i = 0; i<x; i++){
        printf("%.2f\n", tab2[i]);
    }}
void wyswietl(int x, float tab[]){
    int i;
    for( i = 0; i<x; i++){
        printf("%.2f\n", tab[i]);
    }}

void zamiana(int x, float tab[]){
    float m1, m2;
    float t1,t2;
    // m1 -> minimum
    // m2 -> maximum
    for(int i=0; i<x; i++){
        if (m1>tab[i]){
            m1 = tab[i];
            t1 = tab[i];
        }
        if (m2< tab[i]){
            m2 = tab[i];
            t2 = tab[i];
        } 
    }
    for(int i=0; i<x; i++){
        if(m1 == tab[i]){
            tab[i] = m2; 
        }
        if (m2 == tab[i]){
            tab[i] = m1;
        }
    }
}

void nowatab(int x, float tab[]){
    float tab2[x]; 
    float tab3[x];
    for(int i = 0; i<x; i++){
        tab2[i] = tab[i]*tab[i];
        tab3[i] = tab[i]*tab[i]*tab[i];

    }    
     
    for(int i = 0; i<x; i++){
        printf("%.2f\n", tab2[i]);
    }
    for(int i = 0; i<x; i++){
        printf("%.2f\n", tab3[i]);
    }
    }
char wybierz(){
    printf()

}