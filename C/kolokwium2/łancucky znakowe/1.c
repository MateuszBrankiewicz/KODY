#include <stdlib.h>
#include <stdio.h>
void wysrodkuj_stala(char imiemoje[25]);

int main(){
    char imiemoje[25]= {"Mateusz Brankiewicz"};
    wysrodkuj_stala(imiemoje);


}

void wysrodkuj_stala(char imiemoje[25]){
    int l = 0;
    for (int i = 0; i <25; i++){
        if(i>= 40 && i<= 60){
            printf("%c", imiemoje[l]);
            l++;
        }
     else {
        printf(" ");
    }
    }
   



}