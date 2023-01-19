#include <stdlib.h>
#include <stdio.h>
void zamiana(int *, int*);

int main(){
    int a, b;
   
    printf("Podaj a"); scanf("%d", &a);
    printf("Podaj b"); scanf("%d", &b);
     
    zamiana(&a, &b);
    printf("A wynosi: %d\n,", a); 
    printf("B wynosi: %d\n", b); 
}
 void zamiana(int *a, int *b){
    int p;
    p = *a;
    *a = *b;
    *b = p;
}