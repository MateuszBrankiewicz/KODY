#include <stdio.h>
#include <stdlib.h>
void druk (char a);
char czyt();



int main(int argc, char *argv[]) {
	char x;
	printf("Podaj litere" );
	x = czyt();
	druk(x);
	return 0;
}
void druk(char znak){
	printf("%c , %d , #%x\n", znak, znak, znak );
	znak = znak + 1; 
	printf("%c , %d , #%x\n", znak, znak, znak );
	printf("%c\n" , toupper(znak));
}

char czyt (){
	return getchar();
}

