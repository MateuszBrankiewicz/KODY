#include <stdio.h>

float suma_ulamkow(float TETA,float tab[], int *liczniktab);
void drukuj_tablice(float tab[], int *liczniktab);


int main() {
    float TETA = 0.001;
    int liczniktab;
    float tab[50] = {0};
    printf("Końcowa suma: %f\n",suma_ulamkow(TETA, tab, &liczniktab)); 
    drukuj_tablice(tab, &liczniktab);
    system("PAUSE");
    return 0;
}


float suma_ulamkow(float TETA,float tab[], int *liczniktab) {
    float suma = 0;
    int j = 1;
    float ulam;
    int licznik = 0;

     *liczniktab = 0;
    while (1) {
        ulam = (float) j / ((2 * j + 1) * (2 * j + 1));
        if (ulam <= TETA) {
            break;
        }
        suma += ulam;
        licznik++;
        if (licznik == 4) {
            printf("Bieżąca suma: %f\n", suma);
            licznik = 0;
        }
        if (*liczniktab == 50) {
            tab[*liczniktab] = suma;
           
        }
         *liczniktab += 1;
        j++;
    }
    
    
    return suma;
    
}
void drukuj_tablice(float tab[], int *liczniktab) {
    int i;
    printf("%d", *liczniktab);
    for (i = 0; i < *liczniktab; i++) {
            
            printf("Tablica: %f ", tab[i]);
        }
        printf("\n");
    }
    