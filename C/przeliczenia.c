#include <stdio.h>
#include <stdlib.h>
float milenakilometry(float);
void druk(float);
float kilometrynamile(float);
float KMnaW(float);
float kmh_ms(float);
float stopnie(float);
int main(){
	int liczba;
	float mile, kilometry, KM, kmh;
	float F;
			
	printf("Wybierz przeliczenie:\n 1: Mile na kilometr: \n 2. kilometry na mile: \n 3.Konie mechaniczne na Waty: \n 4.Kilometry na godzine na metry na sekunde \n 5.Stopnie farenhajata na stopnie celsjusza: ");
	scanf("%d", &liczba);


	switch (liczba){
		case 1 :
			
			printf("Podaj wartosc mil aby przeliczyc na kilometry: ");
			scanf("%f" , &mile);
			druk(milenakilometry(mile));
			break;
		case 2 :
			printf("Podaj wartosc kilometry aby przeliczyc na mile: ");
			scanf("%f", &kilometry);
			druk(kilometrynamile(kilometry));
			break;	
		case 3 :
			printf("Podaj wartosc koni mechanicznych aby przeliczyc na Waty: ");
			scanf("%f", &KM);
			druk(KMnaW(KM));
			break;
		case 4 :
			printf("Podaj wartosc kilometrow na godzine aby przeliczyc na metry na sekunde: ");
			scanf("%f", &kmh);
			druk(kmh_ms(kmh));
			break;	
		case 5 :
			printf("Podaj wartosc stopni farenhajta  aby przeliczyc na stopnie celsjusza: ");
			scanf("%f", &F);
			druk(stopnie(F));
			break;										
	}		
	

}
float milenakilometry(float mile){

	return mile * 0.625;
}
float kilometrynamile(float kilometry){
	return kilometry * 1.6;
}
float KMnaW(float KM){
	return KM * 735;
}
float kmh_ms(float kmh) {
	return kmh * 3.6;
}
float stopnie(float F){
	float celsjusz;
	celsjusz = (5./9.)*(F - 32.);
	return celsjusz;
}
void druk(float funkcja){
	printf("To przeliczenie wynosi : %0.3f" ,funkcja);
}

