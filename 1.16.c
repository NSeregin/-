/* Серегин Никита 23.10.2026
Решение к задаче R&K 1.16*/
#include <stdio.h>
#define MAX 10

int getline(char[], int maxline);
void copy(char to[], char from[]);

int main() {
	int len;
	int maxlen;
	char line[MAX];
	char longest[MAX];
	
	maxlen = 0;
	while ((len = getline(line, MAX)) > 0) 
		if(len > maxlen) {
			maxlen = len;
		copy(longest, line);
	}
	if (maxlen > 0) {
		printf("%s", longest);
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
	if(c != EOF) {                                //решение к задаче - начало
		while((c != getchar()) && c != '\n')
			++i;
	}                                             //конец
	s[lim - 1] = '\0';
	return i;
}
void copy(char to[], char from[]) {
	int i = 0;
	while((to[i] = from[i]) != '\0')
		++i;
}
