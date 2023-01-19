#include <stdlib.h>
#include <stdio.h>
float wyznaczanie(float*);

int main(){
    float m1, m2;
    m1 =wyznaczanie(&m2);
     printf("%f\n%f\n",m1,m2);
}

float wyznaczanie(float *m2){
    int n; 
    float m1;
    float l; 
    printf("Ilosc liczb");scanf("%d", &n);
    for (int i = 0; i < n; i++){
        printf("Liczba: ");scanf("%f", &l);
        if (m1 < l){
            *m2 = m1;
            m1 = l;}
         else if (*m2< l ){
            *m2 = l;
        }
    }
    return m1;


}