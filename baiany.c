#include <stdio.h>
#include <string.h>
#define MAX 1000

int main() {
	int n, count = 0;
	scanf("%d", &n);
	getchar();
	char arr[MAX][31];
	
	for(int i = 0; i < n; i++) {
		int len = 0;
		int c = 0;
		while((c = getchar()) != '\n' && c != EOF && len < 30) {
			arr[i][len++] = c;
		}
		arr[i][len] = '\0';
	}
	
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++) {
			if(strcmp(arr[i],arr[j]) == 0) {
				count++;
				break;
			}
		}
	}
	printf("%d", count);
	return 0;
}
