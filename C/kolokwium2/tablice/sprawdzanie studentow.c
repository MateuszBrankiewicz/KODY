#include <stdio.h>
#include <stdlib.h>
# define FALSE 0
#define TRUE !(FALSE)
void wczytaj(float*,int);
char sprawdzam(float*, int);


int main(){
    float *tab;
    int n;
    char spr;
    printf("Podaj liczbe studentow"); scanf("%d", &n);
    wczytaj(&tab,n);
    spr = sprawdzam(&tab,n);
    if(spr == FALSE){
        printf("Nie wszyscy zdali");
    }
    else printf("Wszyscy zdali");
}

void wczytaj(float *tab,int n){
    for(int i =0 ; i<n ;i++){
        printf("Podaj ocene"); scanf("%f", (tab + i));
    }
}

char sprawdzam(float *tab,int n){
    for(int i = 0; i<n ; i++){
        if (*(tab+i) >= 3){
            continue;
            
        }
        else{
            
            return 0;
            
            
        } }}