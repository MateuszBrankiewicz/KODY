// #include <stdio.h>
// #include <stdlib.h>
// #define N 5 

// void wczytaj(int n,float tab1[],float tab2[]);
// void wyswietl(int n, float tab1[],float tab2[]);

// int main()
// {
// 	int n;
// 	printf("Podaj dlugosc tablicy: "); scanf("%d",&n);
// 	float tab1[N]; //stala dlugosc tablicy
// 	float tab2[n]; //zmienna dlugosc tablicy
// 	wczytaj( n,tab1, tab2);
// 	wyswietl(n,  tab1, tab2);
// }

//  void wczytaj(int n,float tab1[],float tab2[])
//  {
//  	int i;
   
//     printf("tab1\n");
//     for (i=0; i<N; i++)
//  	{
// 		printf("Wpisz liczbe : "); scanf("%f",&tab1[i]);
		
		
// 	}
//      printf("tab2\n");
//  	for (i=0; i<n; i++)
//  	{
// 		printf("Wpisz liczbe : "); scanf("%f",&tab2[i]);
		
// 		if (i<N) tab1[i]=tab2[i];
// 	}
//  }
 
//  void wyswietl( int n, float tab1[],float tab2[])
//  {
//  	  int i;
//     printf("tab1\n");
       
//     for( i = 0; i<N; i++){
//         printf("%.2f\n", tab2[i]);
//     }
   
//     printf("tab2\n");
//      for( i = 0; i<n; i++){
//         printf("%.2f\n", tab1[i]);
//     }}
   
#include <stdio.h>
#include <stdlib.h>
#define N 5 

void wczytaj(int n,float tab1[],float tab2[]);
void wyswietl(float tab1[],float tab2[]);

int main()
{
	int n;
	printf("Podaj dlugosc tablicy: "); scanf("%d",&n);
	float tab1[N]; //stala dlugosc tablicy
	float tab2[n]; //zmienna dlugosc tablicy
	wczytaj( n,tab1, tab2);
	wyswietl( tab1, tab2);
}

 void wczytaj(int n,float tab1[],float tab2[])
 {
 	int i;
 	printf("iiiiiii");
 	for (i=0; i<n; i++)
 	{
		printf("Wpisz liczbe : "); scanf("%f",&tab2[i]);
		
		if (i<N) tab1[i]=tab2[i];
	}
 }
 
 void wyswietl(float tab1[],float tab2[])
 {
 	int i;
 	printf("Tablica stala:\n");
 	for (i=0; i<N; i++)
 	{
 	printf("%f\n",tab1[i]);
 	}
 	printf("Tablica zmienna:\n");
 	
 	for (i=0; i<N; i++)
 	{
 	printf("Tablica zmienna: %f \n", tab2[i]);
	}
 }
  