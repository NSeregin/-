/*Серегин Никита 21.10.2026
Решение задачи 1.15 R&K*/

#include <stdio.h>
float temp(float);
int main()
{
	float fahr;
	int lower, upper, step;
	
	lower = 0;   
	upper = 300; 
	step = 20; 
	printf("-----------------\n");
	printf("| fahr | celsius|\n");
	printf("-----------------\n");
	fahr = lower;
	while (fahr <= upper) { 
		printf("| %3.0f  | %6.1f |\n", fahr, temp(fahr));
		fahr = fahr + step;
	}
	printf("-----------------\n");
	return 0;
}

float temp(float fahr) {
	return (5.0/9.0) * (fahr-32.0);
}
