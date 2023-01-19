#include <stdlib.h>
#include <stdio.h>
int main() {
char tab[2][40];
gets(tab[0]);
puts(tab[0]);
gets(tab[1]);
puts(tab[1]);
printf("%d", strcmp(tab[0], tab[1]));
return 0;
}