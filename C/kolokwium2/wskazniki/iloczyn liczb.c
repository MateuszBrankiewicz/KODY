#include <stdlib.h>
#include <stdio.h>
char iloczyn(float *wynik);

int main(){
   float wynik;
   char tak;
    tak = iloczyn(&wynik);
    if (tak == 0){
        printf("Błędne liczby");
    }
    else{
        printf("Wynik wynosi: %0.2f", wynik);
    }


}


char iloczyn(float * wynik){
    
    float n;
    int ile;
   
    *wynik = 1;
    printf("Podaj ile liczb"); scanf("%d",&ile);
    for(int i = 0; i < ile ; i++){
         printf("Podaj liczbe"); scanf("%f", &n);
        if (n >= 1 && n <= 100){   
            *wynik *=  n;
        }
        else{
            return 0;
            break;
        }
        
    }
}