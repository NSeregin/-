#include <stdio.h>
#define IN 1
#define OUT 2

int main() {
	int c, poz;
	poz = OUT;
	
	while((c = getchar()) != EOF) {
		if(c != ' ' && c != '\n' && c != '\t') {
			poz = IN;
			putchar(c);
		}
		else if(poz = IN){
			poz = OUT;
			putchar('\n');
		}
	}
	return 0;
}
