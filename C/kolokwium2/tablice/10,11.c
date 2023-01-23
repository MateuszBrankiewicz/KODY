#include <stdlib.h>
#include <stdio.h>
#define N 2
#define K 5
void wczytaj(float tab[N][K]);
char sprawdzam(float tab[N][K]);
void wyswietl(float tab[N][K]);
int main(){
    char wynik;
    float tab[N][K];
    wczytaj(tab);
    wyswietl(tab);
    wynik = sprawdzam(tab);
    if(K%2 == 1){
    if(wynik == 0){
        printf("Nie jest symetryczna");
    }
    else printf("Symetryczna");
    }
    else{
        if(wynik == 0){
            printf("Wiersze brzegowe nie sa takie same");
        }
        else{
            printf("Wiersze brzegowe sa takie same");
        }
    }
}


void wczytaj(float tab[N][K]){
    for( int i = 0; i < N; i++) {
        for(int j = 0;  j < K; j++){
            printf("Podaj liczbe tab[%d][%d]", i, j); scanf("%f", &tab[i][j]);
        }
    }
}
void wyswietl(float tab[N][K]){
    for( int i = 0; i < N; i++){
        for(int j = 0; j < K; j++){
             printf("tab[%d][%d]: %0.2f\n", i, j, tab[i][j]);
        }
    }
}

char sprawdzam(float tab[N][K]){
    int wiersz;
    wiersz = N - 1;
    if(K%2 == 0){
        for(int j = 0; j < K; j++){
            if(tab[0][j]== tab[wiersz][j]){
                continue;
            }
                else return 0;
                
            }
            }
    
    else{
        int s =K/2 + 1;
        for (int i = 0 ; i < N; i++){
            for (int j = 0; j <= s; j++){ 
                if(tab[i][j] == tab[i][K-1-j]){
                    continue;
                }
                return 0;
        }
    }

    
}
}