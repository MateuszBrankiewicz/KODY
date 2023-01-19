#include <stdlib.h>
#include <stdio.h>

void funkcja(int *wylosowana, int n);


int main(){
    int wylosowana;
   printf("Liczba"); scanf("%d", &n);
    funkcja(&wylosowana, n );
    for(int i = 0; i < n; i++){
    printf("%d", *(wylosowana + i));
    
  
}
}
    
void funkcja(int *wylosowana, int n){
    for(int i = 0; i < n; i++){
        *(wylosowana + i) = rand()%10;
        }
    for (int i = 0; i < n; i++){
    printf("%d\n", *(wylosowana + i));
    }
}

