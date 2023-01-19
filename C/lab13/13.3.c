#include <stdio.h>
#include <stdlib.h>

struct pracownicy {
    char imie[15];
    char nazwisko[25];
    int godziny;
    int stawka;
    float premia;
    float wyplata;
};

void wyswietldane(struct pracownicy emp[], int size);
void wczytajdane(struct pracownicy emp[], int size);

int main() {
    int n ; // liczba pracowników
    printf("Podaj ilosc pracownikow"); scanf("%d", &n);
    struct pracownicy employees[n]; // tablica struktur Employee o rozmiarze 3
    
    wczytajdane(employees, n);
    printf("Dane pracownikow:\n");
    wyswietldane(employees, n);

    return 0;
}

void wczytajdane(struct pracownicy emp[], int size) {
    for (int i = 0; i < size; i++) {
        fflush(stdin);
        printf("Podaj imie pracownika %d: ", i + 1);
        fgets(emp[i].imie, 15, stdin);
        printf("Podaj nazwisko pracownika %d: ", i + 1);
        fgets(emp[i].nazwisko, 25, stdin);
        printf("Podaj liczbe godzin przepracowanych przez pracownika %d: ", i + 1);
        scanf("%d", &emp[i].godziny);
        printf("Podaj stawke godzinowa pracownika %d: ", i + 1);
        scanf("%d", &emp[i].stawka);
        printf("Podaj procent premii dla pracownika %d: ", i + 1);
        scanf("%f", &emp[i].premia);
        emp[i].wyplata = emp[i].godziny * emp[i].stawka + (emp[i].godziny * emp[i].stawka * emp[i].premia / 100);
    }
}

void wyswietldane(struct pracownicy emp[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Imie: %s", emp[i].imie);
        printf("Nazwisko: %s", emp[i].nazwisko);
        printf("Liczba godzin: %d\n", emp[i].godziny);
        printf("Stawka: %d\n", emp[i].stawka);
        printf("Premia: %.2f%%\n", emp[i].premia);
        printf("Paca: %.2f\n", emp[i].wyplata);
    }
}