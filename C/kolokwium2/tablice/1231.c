#include <stdlib.h>
#include <stdio.h>

void funkcja(int wylosowana[], int n);


int main(){
    int n;
    int wylosowana[] = {1,2,3,3,12,3,123,};
   printf("Liczba"); scanf("%d", &n);
    funkcja(wylosowana, n );

}
    
void funkcja(int *wylosowana, int n){
    // for(int i = 0; i < n; i++){
    //     *(wylosowana + i) = rand()%10;
    //     }
    for (int i = 0; i < n; i++){
    printf("%d\n", *(wylosowana + i));
    }
}

