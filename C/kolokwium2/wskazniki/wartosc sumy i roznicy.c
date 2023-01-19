#include <stdlib.h>
#include <stdio.h>
void liczby (int*, int*);
int main(){
    int a, b;
    printf("Podaj dwie liczby"); scanf("%d%d", &a, &b);
    liczby(&a,&b);
    printf("Suma: %d", a);
    printf("Roznica: %d", b);


}

void liczby(int *a, int *b){
    int temp1, temp2;
    temp1 = *a - *b;
    temp2 = *a + *b;
    *b = temp1;
    *a = temp2;

}