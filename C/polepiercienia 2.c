#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float pole (int R, int r);
void druk (float);
 

int main(int argc, char *argv[]) {
	int R, r;
	printf("Podaj prominie okrêgów w pierscieniu (int int)");
	scanf("%d %d" ,&R, &r);
	druk(pole(R, r));
	return 0;
}
float pole(int R, int r){
	float p;
	
	p = (pow(R, 2) - pow(r, 2)) * M_PI;
	return p;
}
void druk (float p){
	printf("Pole pierscienia wynosi %f\n" , p);
}
