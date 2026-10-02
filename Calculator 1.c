#include <stdio.h>
#include <stdlib.h>

double add(double, double);
double mul(double, double);
double sub(double, double);
double d(double, double);

int main() {
	printf("Hi! You have arrived at my first calculator!\n\n"
	       "To launch the calculator, you need to enter any random number, just make sure it is not negative.\n\n"
		   "Good luck!\n");

	double a, b;
	double c;
	int open_code = -1;

	int v;
	scanf("%d", &v);
	if (v < 0)
		printf("Uncorrect number!");
	else

	printf("a = ");
	scanf("%lf", &a);
	printf("b = ");
	scanf("%lf", &b);


	while (open_code != 0) {
		printf("0. Exit\n");
		printf("1. Add\n");
		printf("2. Mul\n");
		printf("3. Sub\n");
		printf("4. D\n");
		scanf("%d", &open_code);

		if (open_code == 1) {
			c = add(a, b);
			printf("%.2lf\n", c);
				getchar();
		} else if (open_code == 2) {
			c = mul(a, b);
			printf("%.2lf\n", c);
				getchar();
		} else if (open_code == 3) {
			c = sub(a, b);
			printf("%.2lf\n", c);
				getchar();
		} else if (open_code == 4) {
			c = d(a, b);
			printf("%.2lf\n", c);
				getchar();

		} else if (open_code == 0 || open_code != 1) {
			printf("See you later\n");
			getchar();
			break;
		}

	}


}
double add(double a, double b) {
	return a + b;
}
double mul(double a, double b) {
	return a * b;
}
double sub(double a, double b) {
	return a - b;
}
double d(double a, double b) {
	return a / b;
}
