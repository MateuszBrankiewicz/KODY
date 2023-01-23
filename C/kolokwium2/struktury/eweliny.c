#include <stdio.h>
#include <stdlib.h>


struct dane {
	char imie[15];
	char nazwisko[25];
	int liczbagodzin;
	float stawka;
	float premia;
	float placa;
	};

struct dane wczytaj();
void wyswietl1(struct dane os);
float oblicz(struct dane os);


void wczytaj2(struct dane *wsk);
float oblicz2(struct dane *wsk);
void wyswietl2(struct dane *wsk);

int main(int argc, char *argv[])
{	struct dane osoba,osoba2;
	osoba=wczytaj();
	osoba.placa=oblicz(osoba);
	wyswietl1(osoba);
	wczytaj2(&osoba2);
	osoba2.placa=oblicz2(&osoba2);
	wyswietl2(&osoba2);
	system("PAUSE");
	return 0;
}


struct dane wczytaj()
{	struct dane os;
	printf("Podaj imie: "); gets(os.imie);
    fflush(stdin);
	printf("Podaj nazwisko: "); gets(os.nazwisko);
    fflush(stdin);
	printf("Podaj liczbe godzin: "); scanf("%d",&os.liczbagodzin);
	printf("Podaj stawke: "); scanf("%f",&os.stawka);
	printf("Podaj premie: "); scanf("%f",&os.premia);
	return os;	
}
float oblicz(struct dane os)
{
	float placa=os.liczbagodzin*os.stawka + (os.liczbagodzin*os.stawka)*os.premia/100;
	return placa;
}

void wyswietl1(struct dane os)
{
	printf("===================================\n");
	printf("Imie i nazwisko: %s %s \n", os.imie, os.nazwisko);
	printf("Liczba godzin: %d\nStawka: %.2fzl\nPremia w procentach: %.2f%\nPLACA WYNOSI: %0.2fzl\n", os.liczbagodzin, os.stawka,os.premia,os.placa);
}

void wczytaj2(struct dane *wsk)
{
	printf("===================================\n");
    fflush(stdin);
	printf("Podaj imie: "); gets(wsk->imie);
    fflush(stdin);
	printf("Podaj nazwisko: "); gets(wsk->nazwisko);
    fflush(stdin);
	printf("Podaj liczbe godzin: "); scanf("%d",&wsk->liczbagodzin);
	printf("Podaj stawke: "); scanf("%f",&wsk->stawka);
	printf("Podaj premie: "); scanf("%f",&wsk->premia);
	
}

float oblicz2(struct dane *wsk)
{
	float placa=wsk->liczbagodzin*wsk->stawka + (wsk->liczbagodzin*wsk->stawka)*wsk->premia/100;
	return placa;
}

void wyswietl2(struct dane *wsk)
{
	printf("===================================\n");
	printf("Imie i nazwisko: %s %s \n", wsk->imie, wsk->nazwisko);
	printf("Liczba godzin: %d\nStawka: %.2fzl\nPremia w procentach: %.2f%\nPLACA WYNOSI: %0.2fzl\n", wsk->liczbagodzin, wsk->stawka,wsk->premia,wsk->placa);
}

