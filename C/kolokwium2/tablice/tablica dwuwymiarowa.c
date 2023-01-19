#include <stdlib.h>
#include <stdio.h>
#define N 6
#define M 3
void wczytaj(float tab[N][M]);
void wyswietl(float tab[N][M]);
int main(){
    float tab[N][M];
    wczytaj(tab);
    wyswietl(tab);


}

void wczytaj(float tab[N][M]){
    for (int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            printf("Podaj liczbe tab[%d][%d]", i, j); scanf("%f", &tab[i][j]);
        }
    }


}

void wyswietl(float tab[N][M]){
        for (int i = 0; i < N; i++){
            for(int j = 0; j < M; j++){
                printf("%5.2f", tab[i][j]);
            if(j== M - 1){
                printf("\n");
            }
        }
    }
}