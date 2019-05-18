#include <stdio.h>

//Celsius to Fahrenheint conversion
int main (){
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	printf ("Celius\tFahrenehit\n");
	while (celsius <=upper){
		fahr = (celsius)*9.0/5.0+32;
		printf("%.0f\t%.1f\n", celsius, fahr);
		celsius = celsius+step;
	}
}