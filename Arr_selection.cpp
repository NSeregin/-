// сортировка выбором

#include <stdio.h>
#define AR_LEN  100 

int main () {
	int n;
	scanf("%d", &n);
	int arr[AR_LEN];
	for(int k = 0; k < n; k = k + 1)  {
		scanf("%d", &arr[k]);
	}
	int i, j;
	int i_min;
	int t;
	for (i = 0; i < n-1; i = i + 1) {
		i_min = i;
		for (j = i + 1; j < n; j = j + 1) {
			if (arr[j] < arr[i_min]) {
				i_min = j;
			}
		}
		t = arr[i_min];
		arr[i_min] = arr[i];
		arr[i] = t;
	}
	for(int i = 0; i < n; i = i + 1) {
		printf("%d_", arr[i]);
	}
	return 0;
}
