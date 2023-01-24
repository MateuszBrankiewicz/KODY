#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
void ulamki(float teta, float* tab);
void wyprowadzenieTablicy(float* a);

int main() {
    float teta, tab[100];
    printf("Wprowadz wartosc teta: ");
    scanf("%f", &teta);
    ulamki(teta, tab);
    wyprowadzenieTablicy(tab);
    system("PAUSE");
return 0;
}

void ulamki(float teta, float* tab) {
    int i, j, k = 0;
    float temp, suma = 0;
    for (i = 0; i < 10; i++) tab[i] = 0;
        for (j = 1;j <= 10000;j++) {
        temp = j / pow((2 * j + 1), 2);
        if (temp < teta) break;
        suma += temp;  
        if (j%16 == 0) printf("suma po %d ulamkach wynosi %f\n", j, suma);
        if (j%50 == 0) {
        tab[k] = temp;
        k += 1;
}
}
printf("Suma ostateczna to: %f\n", suma);
}

void wyprowadzenieTablicy(float* a) {
int i;
for (i = 0; i < 10; i++) {
    if (a[i] != 0) printf("Element tablicy nr %d wynosi: %1.20f\n", i, a[i]);
}
}