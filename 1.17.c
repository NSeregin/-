/*Серегин Никита 24.10.2026
Решение задачи 1.17 R&K*/
#include <stdio.h>
#define MAX 10
#define OGR 5

int getline(char[], int maxline);

int main() {
	int len;
	char line[MAX];

	while((len = getline(line, MAX)) > 0) {
		if(len > OGR) {
			printf("%s", line);
		
		if(len == MAX - 1 && line[len - 1] != '\n') {
			printf("\n");
			}
		}
	}
	return 0;
}
int getline(char s[], int lim) {
	int c,i;
	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] =c;
		++i;
	}
	if(c != EOF) {                                
		while((c = getchar()) != EOF && c != '\n')
			++i;
	}                                             
	return i;
}



