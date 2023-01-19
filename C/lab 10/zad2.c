#include <stdio.h>

#define N 3
#define M 4

void wczytaj(float T[N][M]);
void wyswietl( float T[N][M]);
int main() {
    float T[N][M];
    wczytaj(T);
    wyswietl(T);

}

void wczytaj( float T[N][M])
{
    int i, j;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; ++j) {
            printf("podaj liczbe T[%d][%d]",i,j);
            scanf("%f", &T[i][j]);
        }
    }
}
void wyswietl( float T[N][M])
{
    int i, j;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; ++j) {
            printf("elementy: %f\n", T[i][j]);
        }
    }
}