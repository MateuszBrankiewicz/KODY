#include <stdio.h>
#include <stdlib.h>

char iloczyn(int, float *pr,float *);
void wczytaj(float *pr, int n);
int main(int argc, char *argv[]) {
	int n,i;
    float ilocz;
	printf("Podaj ilosc liczb: "); scanf("%d", &n);
    float pr[n];
	wczytaj(pr, n);
	//wczytaj(&pr, n);
	// for (int i = 0; i < n; i++) {
	// 	printf("%f\n", (pr + i));
	// }
	char czy = iloczyn(n, &pr,&ilocz);
	if (czy=='T'){
		printf("iloczyn:%0.2f", ilocz);}
	else{
		printf("brak liczb");
    }
	
}
void wczytaj(float *pr, int n){
for (int i=0;i<n;i++){
		printf ("Liczba: ");scanf("%f",(pr+i));
	}
}
char iloczyn(int n,float *pr,float *ilocz){
	int i;
	char czy;
	czy = 'N';
    *ilocz = 1;
	for(i=0;i<n;i++){
		if (*(pr+i)<=100 && *(pr+i)>=1){
			// printf("%f", *ilocz);
            *ilocz *= *(pr+i);
            // printf("%f\n", *(pr+i));
			czy = 'T';
	}
        else break;
        
        }
	return czy;
}
