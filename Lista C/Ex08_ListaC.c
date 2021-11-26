#include <stdio.h>
#include <locale.h>
#include <math.h>

int main ()
{
	setlocale (LC_ALL,"");
	
	int V=0, Q=0;
	float g= 9.8, x = V*cos(Q)*0.01, y = V*cos(Q)*0.01-(g*(0.01*0.01))/2;

	
	return 0;
}
