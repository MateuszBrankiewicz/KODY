#include <stdio.h>
#include <stdlib.h>
struct student {
    char imie[50];
    char nazwisko[50];
    char kierunek[50];
    int rok;
    char wydzial[50];
};

struct student wczytaj();
void wyswietl_studenta(struct student s) ;
int main() {
    struct student studenci[2];

    for (int i = 0; i < 2; i++) {
    printf("Podaj dane dla studenta %d:\n", i+1);
        studenci[i] = wczytaj();       
    }

    for (int i = 0; i < 2; i++) {
        printf("Dane studenta %d:\n", i+1);
        wyswietl_studenta(studenci[i]);
    }

   
    system("PAUSE");
     return 0;
}

struct student wczytaj() //???
 { struct student studenci ;

        printf("Imię: ");
        scanf("%s", studenci.imie);
        printf("Nazwisko: ");
        scanf("%s", studenci.nazwisko);
        printf("Kierunek: ");
        scanf("%s", studenci.kierunek);
        printf("Rok: ");
        scanf("%d", &studenci.rok);
        printf("Wydział: ");
        scanf("%s", studenci.wydzial);
 return studenci; //???
 }
 void wyswietl_studenta(struct student s) {
    printf("Imię: %s\nNazwisko: %s\nKierunek: %s\nRok: %d\nWydział: %s\n", s.imie, s.nazwisko, s.kierunek, s.rok, s.wydzial);
}