#include <stdio.h>
#include <stdlib.h>
#include "TabliceDyn.h" //???
int main(int argc, char *argv[]) {
	int ile; int *tab1;
//tablice dynamiczne
printf("Podaj liczbę elementów tablicy ");
scanf("%d",&ile);
 tab1=utworzTD(ile); //???
 printf("tablica dyn:\n");
 wyswietlTD(tab1, ile); //???
 usunTD(tab1); //???
 return 0;
 }