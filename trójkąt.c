#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a, b, c;
int p, Pole;

void pole_trojkata (int a, int b, int c, int Pole, int p){
	 p = (a + b + c) / 2;
	 printf ("Podaj a b c");
	scanf("%d %d %d", &a, &b, &c);
    Pole = sqrt(p * (p - a) * (p - b) * (p - c));
   
    return  printf ("Jest trojkatem a pole wynosi %d" ,Pole);
    }
int main(  ) {
	
	while (a > 0 & b > 0 & c > 0 ){
	if (a + b > c) {
		pole_trojkata(a,b,c);
		
		
	} 
	else{
		printf("Nie jest trojkatem");
		};
}
	return 0;
}
