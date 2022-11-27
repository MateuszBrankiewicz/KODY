#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
void licz(char *s);

int main(){
    char s[50];
    printf("Wpisz zdanie: "); fgets(s, 50, stdin);
    licz(s);
    return 0;
}

void licz(char *s){
    int cyfra = 0;
    int dlugosc = strlen(s);
    char tablica[dlugosc];
    int licznik = 0;
    for(int i=0; i < dlugosc; i++){
         if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            bool czy_powtorzone = false;
            for(int j = 0; j<licznik;j++){
                if(s[i] == tablica[j]){
                    czy_powtorzone = true;
                }
            }
            if(czy_powtorzone){
                continue;
            }

            int ilosc = 0;
            for(int j=0;j<dlugosc; j++){
                if(s[i] == s[j]) ilosc++;
            }
            printf("%c - %d/a\n", s[i], ilosc);
            tablica[licznik] = s[i];
            licznik++;
        }
        else if(s[i]>='0' && s[i]<='9')
        {
            cyfra++;
        }

    }
    printf("W zdaniu jest/sa %d cyfr/y\n", cyfra);
}
