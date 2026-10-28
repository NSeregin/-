  #include <stdio.h>
#define MAX 10

int getline(char[], int maxline);
int obrez(char[]);

int main() {
char line[MAX];
	while(getline(line, MAX) > 0) {
		int len = obrez(line);
		if (len > 0)
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

int obrez(char s[]) {
	int i = 0;
	while(s[i] != '\0') {
		++i;
	}
	--i;
	
	while(i >= 0 && (s[i] == '_')) {
		--i;
	}
	i++;
	if (i > 0) s[i] = '\0';
	return i;
}

