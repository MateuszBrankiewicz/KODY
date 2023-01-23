#include <stdio.h>
#include <Stdlib.h>

int main(){
    char t[] = "Jurek";
    char *w;
    w = &t[0] + 5;
    printf("%s\n", t);
    printf("%c", t[5]);

}