#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void wprowadzenie(int*, int*);
void dzialanie(int, int, int* feedback, float* r);
int main() {
int x, y, cw;
float odleglosc;
wprowadzenie(&x, &y);
dzialanie(x, y, &cw, &odleglosc);
printf("odleglosc to: %f\n", odleglosc);
if (cw == 1) printf("nalezy do cwiartki: 1");
else if (cw == 2) printf("nalezy do cwiartki: 2");
else if (cw == 3) printf("nalezy do cwiartki: 3");
else if (cw == 4) printf("nalezy do cwiartki: 4");
else if (cw == 14) printf("nalezy do cwiartki: 1 i 4");
else if (cw == 12) printf("nalezy do cwiartki: 1 i 2");
else if (cw == 1234) printf("nalezy do cwiartki: 1 i 2 i 3 i 4");
else if (cw == 34) printf("nalezy do cwiartki: 3 i 4");
else if (cw == 23) printf("nalezy do cwiartki: 2 i 3");
}

void wprowadzenie(int* a, int* b) {
printf("wprowadz wspolrzedne _;_\n");
scanf("%d;%d", a, b);
}

void dzialanie(int a, int b, int* c, float* d) {
if (a > 0) {
if (b > 0) *c = 1;
else if (b == 0) *c = 14;
else *c = 4;
}
else if (a == 0) {
if (b > 0) *c = 12;
else if (b == 0) *c = 1234;
else *c = 34;
}
else {
if (b > 0) *c = 2;
else if (b == 0) *c = 23;
else *c = 3;
}
*d = sqrt(a*a + b*b);
}
