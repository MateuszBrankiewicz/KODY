#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 3

void wczytaj(float studenci[N][M]);
float sredniaZespolu(float studenci[M]);
float sredniastudenciaka(float studenci[N][M]);
float najocenka(float studenci[N][M]);
void wyswietl(float studenci[N][M]);
int main(){
    float studenci[N][M];
    wczytaj(studenci);
    for (int i = 0; i <N; i++){
        printf("Srednia dla zespolu[%d] %f\n",i+1, sredniaZespolu(studenci[i]));
    }
    printf("Srednia dla wszystkich studentow: %f\n",sredniastudenciaka(studenci));
    printf("Najlepsza ocena: %f\n",najocenka(studenci));


}
void wczytaj(float studenci[N][M]){
    for(int i=0; i<N; i++){
        printf("Podaj oceny dla zespołu %d:\n", i+1);
        for(int j=0; j<M; j++){
            printf("Ocena dla studenta %d: ", j+1);
            scanf("%f", &studenci[i][j]);
        }
    }
}


float sredniaZespolu(float studenci [M]){
    float suma = 0;
        for(int j=0;j<M;j++){
            suma += studenci[j];
        }
    return suma/M;
}
float sredniastudenciaka(float studenci [N][M]){
    float suma = 0.0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            suma += studenci[i][j];
        }
        
    }    

    return suma/(N*M);
}
float najocenka(float studenci [N][M]){
    float najlepsza = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(studenci[i][j] > najlepsza){
                najlepsza = studenci[i][j];
            }
        }
    }
    return najlepsza;    



}