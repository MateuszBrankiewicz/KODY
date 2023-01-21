#include <stdlib.h>
#include <stdio.h>
struct plan_zajec{
    int ilosc;
    char dzien[10];
    float *godzinar;
    float *godzinaz;
    char *przedmiot;
    char *wykładowca;
    int *nr_sali;
};
void wczytaj(struct plan_zajec pz[5]);
void wyswietl(struct plan_zajec pz[5]);




int main(){
    int n;
    struct plan_zajec pz[5];
    wczytaj(pz);
    wyswietl(pz);

    

}
void wczytaj(struct plan_zajec pz[5]){
    for (int i = 0; i < 5; i++){
        printf("Podaj dzien tygodnia"); gets(pz->dzien);
        printf("Podaj ilosc przedmiotow"); scanf("%d", &pz->ilosc);
        for (int j = 0; j<pz->ilosc; j++){
            printf("Podaj godzine rozpoczecia %d przedmiotu", j+1); scanf("%f", pz->godzinar);
            printf("Podaj godzine zakonczenia %d przedmiotu", j+1); scanf("%f", pz->godzinaz);
            printf("Nazwa %d przedmiotu", j+1); gets(pz->przedmiot);
        }


    }


}