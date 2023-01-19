#include <stdlib.h>
#include <stdio.h>
void f1(float tab[], int n);
void f2(float tab[], int n);
void f3(float tab[], int n);
void wyswietl(float *tab, int n);

int main(){
    int n;
    float d[n];
    float u[n];
    int x, ktora;
    while (x!= 4){ 
    printf("Wybierz opcje:\n  1 - tworzy tablicę D zawierającą elementy dodatnie, \n2 – tworzy tablicę U zawierającą elementy ujemne,\n3 - oblicza ile elementów jest = 0.");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        printf("Podaj rozmiar tablicy"); scanf("%d", &n);
        f1( d, n);
        wyswietl( d, n);
        break;
    case 2:
        printf("Podaj rozmiar tablicy"); scanf("%d", &n);
        f2(u,n);
        wyswietl(u,n);
        break;
    case 3:
        printf("Którą tablice chcesz sprawdzic: 1 - D 2 - U"); scanf("%d", &ktora);
       if (ktora == 1){
            f3(d,n);
            
        }
        else {
            f3(u,n);
            
        }
       
        
    case 4:
        break;
    default:
        printf("Zły wybor");
        
    }}

}
void f1(float tab[], int n){
    for(int i = 0; i < n; i++){
        *(tab+i) = rand()%10;

}}
void f2(float tab[], int n){
    for(int i = 0; i < n; i++){
        *(tab+i) = rand()%10 *(-1);

}}
void f3(float tab[], int n){
    int ile = 0;
    for (int i = 0; i < n; i++){
        if(*(tab+i)==0){
            ile++;
        }
    }
    printf("Było %d zer/o\n", ile);
}














void wyswietl(float *tab, int n){
    for (int i = 0; i < n; i++){
        printf("%5.2f\n",*(tab+i));
    }
}