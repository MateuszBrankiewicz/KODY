#include <stdio.h>

#define N 2

void wczytaj(float T[N][N]);
void wyswietl( float T[N][N]);
float suma1(float T[N][N]);
float iloczyn1(float T[N][N]);
int main() {
    float T[N][N];
    wczytaj(T);
    wyswietl(T);
    printf("suma wynosi: %2.f", suma1(T));
    printf("suma wynosi: %2.f", iloczyn1(T));

}

void wczytaj( float T[N][N])
{
    int i, j;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("podaj liczbe T[%d][%d]",i,j);
            scanf("%f", &T[i][j]);
        }
    }
}
void wyswietl( float T[N][N])
{
    int i, j;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%2.f", T[i][j]);
            if((j+1)%N==0) printf("\n");
        }
    }
}
float suma1( float T[N][N])
{
    int i, j;
    float suma;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if(i==j)
            {
                suma+=T[i][j];
            }

        }
    }
    return suma;
}

float iloczyn1( float T[N][N]) {
    int i, j;
    float iloczyn=1;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                iloczyn *= T[i][j];
            }

        }
    }
    return iloczyn;
}