/*Серегин Никита 2026-11-06
Решение задачи 1.20 R&K*/
#include <stdio.h>
#define TABS 8 

int main() {
	int c;
	int pos = 0;
	
	while((c = getchar()) != EOF) {
		if(c == '\t'){
			int space = TABS - (pos % TABS);
			for(int i = 0; i < space; ++i) {
				putchar('_');
				++pos;
			}
		}
		else if(c == '\n') {
			putchar(c);
			pos = 0;
		}
		else {
			putchar(c);
			++pos;
		}
	}
	return 0;
}
