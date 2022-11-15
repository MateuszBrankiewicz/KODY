#include <stdio.h>
#include <stdlib.h>


int main (){
	int ilosc,  p;
	float bazowe, suma;
	float premia = 500;
	float wyplata, dodatek, lata;
	printf("Podaj ilosc pracownikow");
	scanf("%d", &ilosc);
	int i;
	for(i=1; i<=ilosc; i++){
		printf("Podaj ilosc przepracowanych lat pracownika nr %d" ,i);
		scanf("%f", &lata);
		printf("Podaj bazowe wynagrodzenie pracownika nr %d" ,i);
		scanf("%f" ,&bazowe);
		printf("Czy pracowniek posiada premie [1-tak/0-nie]");
		scanf("%d",&p);
		
			if (lata >= 5 && lata <= 20){
				dodatek = bazowe * (lata/100);
				
			}
			else if(lata > 20) {
			dodatek = bazowe * 0.2;
			}
			else{
				dodatek = 0;
			}
			 if(p == 1){
            wyplata = bazowe + dodatek + premia;
        } else {
            wyplata = bazowe + dodatek;
        }
	suma =+ wyplata;
		printf("Wyplata pracownika nr %d wynosi: %5.3f \n" , i, wyplata);
		printf("\nSumaryczne wynagrodzenia wynosza : %0.2f\n" ,suma);
	}
	
	
}
