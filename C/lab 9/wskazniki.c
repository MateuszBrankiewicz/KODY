#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
char pole(float,float,float, float*, float*, float*);

void dane(float*, float*, float*);

int main(){
    setlocale(LC_ALL, "");
    float a, b, c;
    float ob, pp,ppb;
    char wynik;
   dane(&a,&b,&c);
    wynik = pole(a,b,c,&pp,&ppb,&ob);
    if (wynik == 'T'){ printf("jedna sciana byla kwadratem");}
    else{

    printf("Objetosc wynosi %5.2f\n" ,ob);
    printf("Pole prostopadloscianu wynosi %5.2f\n" ,pp);
    printf("Przekątna wynosi %5.2f\n" ,ppb);}
}

char pole(float a, float b, float c,float* ppb, float* pp, float* ob){
char info1;
    if(a==b|| a==c || b==c){ return info1 = 'T';}
    else
    *ob = a*b*c;
    *pp = (2*a) + (2*b) + (2*c);
    *ppb = sqrt(a*a+b*b+c*c);
     return info1 = 'N';



}
void dane(float *a, float*b, float*c){
     printf("Podaj a"); scanf("%f",a);
    printf("Podaj b"); scanf("%f",b);
    printf("Podaj c"); scanf("%f",c);
}
