#include <stdio.h>
#define MAX 100

int getline(char[], int maxline);
void revers(char[]);

int main() {
char line[MAX];
	while(getline(line, MAX) > 0) {
		revers(line);
		printf("%s\n", line);
	}
	return 0;
}

int getline(char s[], int lim) {
	int c,i;
	for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	s[i] = '\0';
	return i;
}

void revers(char s[]) {
	int i, j;
	for(i = 0; s[i] != '\0'; ++i);
	--i;
	for(j = 0; j < i; ++j, --i) {
		char t;
		t = s[j];
		s[j] = s[i];
		s[i] = t;
	}
}

