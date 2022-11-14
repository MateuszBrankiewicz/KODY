#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, p;
    float s =0;
    float l,dodatek,wyplata;
    float premia = 200;
    float stawka_bazowa = 2400;
    printf("Podaj ilosc pracownikow: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        printf("Podaj lata pracy pracownika nr.%d: ", i);
        scanf("%f", &l);
        printf("Czy pracownik nr.%d posiada premie [1-tak/ 0-nie]: ", i);
        scanf("%d", &p);
        if(l > 20){
            dodatek = stawka_bazowa*0.2;
        } else if(l>=5 && l<=20){
            dodatek = stawka_bazowa * (l/100);
        } else dodatek = 0;

        if(p == 1){
            wyplata = stawka_bazowa + dodatek + premia;
        } else {
            wyplata = stawka_bazowa + dodatek;
        }

        s += wyplata;

        printf("Wyplata pracownika nr.%d wynosi: %0.2f\n",i,wyplata);
    }
    printf("\nSumaryczna wyplata wszystkich pracownikow wynosi: %0.2f",s);

    return 0;
}
