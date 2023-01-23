#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char wyrazy[5][3];
    for (int i=0;i<5;i++){
        gets(wyrazy[i]);
        fflush(stdin);
    }
    for (int i=0;i<5;i++){
        printf("%s\n",wyrazy[i]);
    }
return 0;}
