#include <stdlib.h>
#include <stdio.h>
#include <string.h>
struct pozycjaPlanu {
    char dzienTygodnia[15];
    int godzinaRozpoczecia;
    int godzinaZakonczenia;
    char przedmiot[30];
    char wykładowca[30];
    int nrSali;
};

void zajeciaWDniu(struct pozycjaPlanu *plan, char *dzien, int rozmiar);
void zajeciaZPrzedmiotu(struct pozycjaPlanu *plan, char *przedmiot, int rozmiar);
void ilerazy8(struct pozycjaPlanu *plan, int rozmiar);
int main(){
struct pozycjaPlanu plan[10] = {
    {"Poniedziałek", 8, 10, "Matematyka", "Jan Kowalski", 101},
    {"Poniedziałek", 10, 12, "Informatyka", "Anna Nowak", 102},
    {"Wtorek", 8, 10, "Fizyka", "Adam Smith", 103},
    {"Wtorek", 10, 12, "Chemia", "Ewa Wiśniewska", 104},
    {"Środa", 8, 10, "Biologia", "Jan Nowak", 105},
    {"Środa", 10, 12, "Geografia", "Adam Kowalski", 106},
    {"Czwartek", 8, 10, "Historia", "Ewa Smith", 107},
    {"Czwartek", 10, 12, "Język angielski", "Jan Wiśniewski", 108},
    {"Piątek", 8, 10, "Język niemiecki", "Adam Nowak", 109},
    {"Piątek", 10, 12, "Muzyka", "Ewa Kowalska", 110}
};
    zajeciaWDniu(plan, "Poniedziałek", 10);
    zajeciaZPrzedmiotu(plan, "Informatyka", 10);
    ilerazy8(plan,10);
}





void zajeciaWDniu(struct pozycjaPlanu *plan, char *dzien, int rozmiar) {
    printf("Zajęcia w dniu %s:\n", dzien);
    for (int i = 0; i < rozmiar; i++) {
        if (strcmp(plan[i].dzienTygodnia, dzien) == 0) {
            printf("%d:%d , %s, %s, %d\n", plan[i].godzinaRozpoczecia, plan[i].godzinaZakonczenia, plan[i].przedmiot, plan[i].wykładowca, plan[i].nrSali);
        }
    }
}

void zajeciaZPrzedmiotu(struct pozycjaPlanu *plan, char *przedmiot, int rozmiar) {
    printf("Zajęcia z przedmiotu %s:\n", przedmiot);
    for (int i = 0; i < rozmiar; i++) {
        if (strcmp(plan[i].przedmiot, przedmiot) == 0) {
            printf("%d:%d  %s, %s, %d\n", plan[i].godzinaRozpoczecia, plan[i].godzinaZakonczenia, plan[i].przedmiot, plan[i].wykładowca, plan[i].nrSali);
        }
    }
}
void ilerazy8(struct pozycjaPlanu *plan, int rozmiar){
    int liczbaZajec8 = 0;
for (int i = 0; i < 10; i++) {
    if (plan[i].godzinaRozpoczecia == 8) {
        liczbaZajec8++;
    }
}
printf("Zajęcia rozpoczynające się o 8 rano: %d\n", liczbaZajec8);

}