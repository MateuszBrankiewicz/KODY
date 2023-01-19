#include <stdlib.h>
#include <stdio.h>
struct studenci 
{
    char imie[20];
    char nazwisko[20];
    int numerek;
};
void wczytaj(struct studenci st[],int n);
void wyswietl(struct studenci st[], int n);
void najwiekszy(struct studenci st[], int n);
int main(){
    int n;
    
    printf("Podaj liczbe studentow"); scanf("%d",&n);
    struct studenci st[n];
    wczytaj(st,n);
    printf("Dane studentow\n");
    wyswietl(st,n);
    najwiekszy(st,n);

        

    
}




void  wczytaj(struct studenci st[], int n)
{
    for(int i=0; i<n; i++){
        fflush(stdin);
        printf("Podaj imie"); gets(st[i].imie);
        fflush(stdin);
        printf("Podaj nazwisko"); gets(st[i].nazwisko);
        st[i].numerek = rand();
    
}
}
void wyswietl(struct studenci st[], int n){
    for(int i = 0; i < n; i++){
    printf("Imie %s\n Nazwisko: %s\n Numerek: %d\n", st[i].imie, st[i].nazwisko, st[i].numerek);
    }
}
void najwiekszy(struct studenci st[], int n){
    int najwiekszy, i;
    najwiekszy = st[0].numerek;
    for( i = 0; i <n; i++){
        if(st[i].numerek < najwiekszy){
            najwiekszy = st[i].numerek;
        }
    }
    printf("Student ktory wygrał:\n%s %s %d", st[i].imie, st[i].nazwisko, st[i].numerek);



}