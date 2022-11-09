git clone https://github.com/microsoft/vcpkg
 C:\vcpkg-master\bootstrap-vcpkg.bat

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
	float r , H, obj;
	float pp, pb, Pc; 
	printf("Wprowadz promien i wysokosc");
	scanf ("%f %f" , &r , &H);
	obj = 2 * M_PI * r * H ;
	printf("%f" ,obj);
	pp = 3.14 * r * r;
	pb = r * H;
	Pc = pp + pb;
	
	return 0;
}
