#include <stdio.h>
#include <stdlib.h>
struct ksiazki {
    char imie[50];
    char nazwisko[50];
    char tytul[50];
    int rok;
    char nazwawyd[50];
};

struct ksiazki wczytaj();
void wyswietl_ksiazki(struct ksiazki ks) ;
int main() {
    struct ksiazki ks[3];

    for (int i = 0; i < 3; i++) {
    printf("Podaj dane dla ksiazki nr %d:\n", i+1);
        ks[i] = wczytaj();       
    }

    for (int i = 0; i < 3; i++) {
        printf("\n\n\n\nDane ksiazki %d:\n", i+1);
        wyswietl_ksiazki(ks[i]);
    }

   
    system("PAUSE");
     return 0;
}

struct ksiazki wczytaj() //???
 { struct ksiazki ks ;
        fflush(stdin);
        printf("Imię autora: ");
        scanf("%s", ks.imie);
        printf("Nazwisko autora: ");
        scanf("%s", ks.nazwisko);
        printf("Tytul ksiazki: ");
        scanf("%s", ks.tytul);
        printf("Rok wydania: ");
        scanf("%d", &ks.rok);
        printf("Nazwa wydawnictwa: ");
        scanf("%s", ks.nazwawyd);
 return ks; 
 }
 void wyswietl_ksiazki(struct ksiazki ks) {
    printf("Imię: %s\nNazwisko: %s\nKierunek: %s\nRok: %d\nWydział: %s\n", ks.imie, ks.nazwisko, ks.tytul, ks.rok, ks.nazwawyd);
}