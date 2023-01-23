#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct cukierki
{
    char producent[40];
    char nazwa[40];
    float cenawkg;
    float iloscwkg;
    char dataprodukcji[11];
    char datawaznosci[11];
};
void wczytaj(struct cukierki cr[], int size);
void cenaprzedzial(struct cukierki cr[], int size, float x, float y, char producent[]);
void poterminie(struct cukierki cr[], int size, char data[]);

int main(){
    int size;
    float x, y;
    char producent[40];
    char data[11];
    printf("Podaj liczbe cukierkow"); scanf("%d",&size);
    struct cukierki cr[size];
    wczytaj(cr, size);
    printf("Podaj przedzial cenowy"); scanf("%f%f",&x,&y);
    fflush(stdin);
    printf("Podaj producenta"); gets(producent);
    cenaprzedzial(cr,size,x,y, producent);
    fflush(stdin);
    printf("Podaj date w ktorej cukierki powinny byc po terminie"); gets(data);
    fflush(stdin);
    poterminie(cr,size, data);
    system("PAUSE");
}

void wczytaj(struct cukierki cr[], int size){
    for (int i = 0 ; i<size; i++){
        fflush(stdin);
        printf("Podaj producenta: "); gets(cr[i].producent);
        fflush(stdin);
        printf("Podaj nazwe: "); gets(cr[i].nazwa);
        fflush(stdin);
        printf("Podaj cene za kg: "); scanf("%f", &cr[i].cenawkg);
        printf("Podaj ilosc w kg: "); scanf("%f", &cr[i].iloscwkg);
        fflush(stdin);
        printf("Podaj date produkcji dz-miesiac-rok "); gets(cr[i].dataprodukcji);
        fflush(stdin);
        printf("Podaj date waznosci dz-miesiac-rok "); gets(cr[i].datawaznosci);
        fflush(stdin);
    }
}
void cenaprzedzial(struct cukierki cr[], int size, float x, float y, char producent[]){
    for(int i = 0; i<size; i++){
        if(strcmp(cr[i].producent, producent)== 0 && cr[i].cenawkg > x && cr[i].cenawkg < y){
            printf("%s\n", cr[i].nazwa);
            printf("%f\n", cr[i].cenawkg);
            printf("%f\n", cr[i].iloscwkg);
            printf("%s\n", cr[i].dataprodukcji);
            printf("%s\n", cr[i].datawaznosci);
        }

    }
}
    void poterminie(struct cukierki cr[], int size, char data[]){
        for(int i = 0; i<size; i++){
            if(strcmp(cr[i].datawaznosci,data) < 0){
                printf("%s\n", cr[i].producent);
                printf("%s\n", cr[i].nazwa);
                printf("%f\n", cr[i].cenawkg);
                printf("%f\n", cr[i].iloscwkg);
                printf("%s\n", cr[i].dataprodukcji);
                printf("%s\n", cr[i].datawaznosci);
            }
        }
    }

