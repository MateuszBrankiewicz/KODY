#include <stdlib.h>
#include <stdio.h>
int rozklad(float*);


int main(){
    float a,b;
    float d = 10;
    int c;
    printf("Liczba"); scanf("%f",&a);
    c = rozklad(&a);
    
    printf("%d\n%f",c, a);
}
int rozklad(float *a){
    int b;
    b = *a;
    *a = *a - b;
    return b;
}