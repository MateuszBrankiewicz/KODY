#include <stdio.h>
#include <stdlib.h>

float sredniaWhile(int);
float sredniaDoWhile(int);

int main(){
    int n;
    printf("Podaj ilosc liczb: "); scanf("%d", &n);
    printf("Srednia While wynosi: %f\n", sredniaWhile(n));
    printf("LICZENIE SREDNIEJ DO WHILE\n");
    printf("Srednia doWhile wynosi: %f", sredniaDoWhile(n));
    return 0;
}

float sredniaWhile(int n){
    int ilosc = n;
    float suma = 0;
    while(n > 0){
        float liczba;
        printf("Podaj liczbe: "); scanf("%f", &liczba);
        suma += liczba;
        n -= 1;
    }
    return suma/ilosc;
}


float sredniaDoWhile(int n){
    int ilosc = n;
    float suma = 0;
    do {
        float liczba;
        printf("Podaj liczbe: "); scanf("%f", &liczba);
        suma += liczba;
        n -= 1;
    }
    while(n > 0);
    return suma/ilosc;
}
