#include <stdio.h>
#include <stdlib.h>
float srednia();


int main(){
	srednia();
}
float srednia(){
	float ilep, ilen, suman, sumap, wynikn, wynikp;
	int x;
	ilep , ilen = 0;
	sumap, suman = 0;
	printf("Podaj x"); scanf("%d", &x);
	while(x != 0){

	 if(x % 2 == 0){
		sumap = sumap + x;
		ilep++;
		printf("%f %f", sumap,ilep);
	}
	else{
		suman = suman + x;
		ilen++; 
		printf("%f %f", suman,ilen);
	}
	printf("Podaj x"); scanf("%d", &x);
	}
	wynikp = sumap/ilep;
	wynikn = suman/ilen;
	printf("Œrednia parzysta wynosi %f\n", wynikp);
	printf("Œrednia nieparzysta wynosi %f", wynikn);
	
}


