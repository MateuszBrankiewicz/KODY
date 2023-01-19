#include <stdio.h>
#include <stdlib.h>
void zamiana(int*, int*);


int main(){
    int a; int b;
    printf("Podaj a");scanf("%d", &a);
    printf("Podaj b");scanf("%d", &b);

    printf("%d %d", a, b);

    zamiana(&a,&b );
    printf("%d, %d", &a, &b);
return 0;

}

void zamiana(int*a, int*b){
    int suma; int roznica;
    suma = *a + *b;
    roznica = *a - *b;
    *a = suma;
    *b = roznica ;


}
