#include <stdio.h>
int main() {
	int arr[100] = {3, 4 ,5, 3, 2, 6, 0, 7};
	int i, count = 0;
	for( i = 0; arr[i] != 0; i = i + 1) {
	count = count + 1;
		;
	}
	printf("%d", count);
	return 0;
}
