#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct pozycjaPlanu {
    char dzienTygodnia[10];
    int godzinaRozpoczecia;
    int godzinaZakonczenia;
    char przedmiot[40];
    char wykladawca[20];
    int nrSali;
};

struct pozycjaPlanu planZajec[] = {
    {"poniedzialek", 8, 10, "wdn", "Malinowska", 101},
    {"poniedzialek", 10, 12, "fizyka", "Pikula", 301},
    {"wtorek", 8, 10, "dyskretna", "nieznaj", 9},
    {"wtorek", 14, 16, "NI", "Miłosz", 201},
    {"wtorek", 16, 18, "NI", "Dziedzic", 202},\
    {"wtorek", 18, 20, "Programowanie strukturalne", "Montusiewicz", 102},
    {"sroda", 12, 14, "WDM", "Malinowska", 301},
    {"czwartek", 8, 10, "Ekonomia", "Zielinski", 301},
    {"czwartek", 14, 16, "WDI", "Chyrantowicz", 301},
    {"piatek", 10, 12, "Programowanie strukturalne", "Montusiewicz", 201},
    {"piatek", 12, 14, "Dyskretna", "Gregosiewicz", 201},
};

int ileRazy8Rano() {
    int ileRazy = 0;
    for (int i = 0; i < 7; i++) {
        if (planZajec[i].godzinaRozpoczecia == 8) {
            ileRazy++;
        }
    }
    return ileRazy;
}

void zajeciaWDniu(char dzien[]) {
    for (int i = 0; i < 7; i++) {
        if (strcmp(planZajec[i].dzienTygodnia, dzien) == 0) {
            printf("%s %d:%d-%d %s %s %d\n", planZajec[i].dzienTygodnia, planZajec[i].godzinaRozpoczecia, planZajec[i].godzinaZakonczenia, planZajec[i].przedmiot, planZajec[i].wykladawca, planZajec[i].nrSali);
        }
    }
}

void zajeciaZPrzedmiotu(char przedmiot[]) {
    for (int i = 0; i < 7; i++) {
        if (strcmp(planZajec[i].przedmiot, przedmiot) == 0) {
            printf("%s %d:%d-%d %s %s %d\n", planZajec[i].dzienTygodnia, planZajec[i].godzinaRozpoczecia, planZajec[i].godzinaZakonczenia, planZajec[i].przedmiot, planZajec[i].wykladawca, planZajec[i].nrSali);
        }
    }
}

int main() {
    printf("Zajecia w poniedzialek:\n");
    zajeciaWDniu('poniedzialek');
    
    return 0;}
