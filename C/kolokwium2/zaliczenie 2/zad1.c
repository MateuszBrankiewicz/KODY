#include <stdio.h>

struct student {
    char imie[50];
    char nazwisko[50];
    char kierunek[50];
    int rok;
    char wydzial[50];
};

struct student wczytaj()
{
    /* data */
};

    /* data */


void wyswietl_studenta(struct student s) {
    printf("Imię: %s\nNazwisko: %s\nKierunek: %s\nRok: %d\nWydział: %s\n", s.imie, s.nazwisko, s.kierunek, s.rok, s.wydzial);
}

int main() {
    struct student studenci[2];

    for (int i = 0; i < 2; i++) {
        printf("Podaj dane dla studenta %d:\n", i+1);
        printf("Imię: ");
        scanf("%s", studenci[i].imie);
        printf("Nazwisko: ");
        scanf("%s", studenci[i].nazwisko);
        printf("Kierunek: ");
        scanf("%s", studenci[i].kierunek);
        printf("Rok: ");
        scanf("%d", &studenci[i].rok);
        printf("Wydział: ");
        scanf("%s", studenci[i].wydzial);
    }

    for (int i = 0; i < 2; i++) {
        printf("Dane studenta %d:\n", i+1);
        wyswietl_studenta(studenci[i]);
    }

    return 0;
}

struct daneos wczytaj() //???
 { struct daneos os;
 printf("Podaj imie "); gets(os.imie); //???
 printf("Podaj nazwisko "); gets(os.nazwisko);
 return os; //???
 }