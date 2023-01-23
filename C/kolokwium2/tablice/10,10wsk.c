#include <stdio.h>
#include <stdlib.h>

void wczytaj(float **studenci,int N, int M);
float sredniaZespolu(float *studenci, int M);
float sredniastudenciaka(float **studenci,int N, int M);
float najocenka(float **studenci,int N, int M);
void wyswietl(float **studenci,int N, int M);
int main(){
    int N, M;
    printf("Podaj N i M: "); scanf("%d%d",&N,&M);
    float **studenci = (float **) malloc(N * sizeof(float*));
    for (int i = 0; i < N; i++) {
        studenci[i] = (float*) malloc(M * sizeof(float));
    }
    wczytaj(studenci, N, M);
    for (int i = 0; i <N; i++){
        printf("Srednia dla zespolu[%d] %f\n",i+1, sredniaZespolu(*(studenci + i),M));
    }
    printf("Srednia dla wszystkich studentow: %f\n",sredniastudenciaka(studenci,N,M));
    printf("Najlepsza ocena: %f\n",najocenka(studenci,N,M));
    for (int i = 0; i < N; i++) {
        free(studenci[i]);
    }
    free(studenci);
}
void wczytaj(float **studenci,int N, int M){
    for(int i=0; i<N; i++){
        printf("Podaj oceny dla zespołu %d:\n", i+1);
        for(int j=0; j<M; j++){
            printf("Ocena dla studenta %d: ", j+1);
            scanf("%f", (*(studenci + i) + j));
        }
    }
}
float sredniaZespolu(float *studenci, int M){
    float suma = 0;
        for(int j=0;j<M;j++){
            suma += *(studenci + j);
        }
    return suma/M;
}
float sredniastudenciaka(float **studenci,int N, int M){
    float suma = 0.0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            suma += *(*(studenci + i) + j);
        }
    }    
    return suma/(N*M);
}
float najocenka(float **studenci,int N, int M){
    float najlepsza = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(*(*(studenci + i) + j) > najlepsza){
                najlepsza = *(*(studenci + i) + j);
            }
        }}
        return najlepsza;}
