#include <stdio.h>
#define MAX 100

int get_n(void);
void print_array(int  [], int);
void get_array(int [], int);
void sort_array(int [], int);

int main() {
	int arr[MAX];
	int n = get_n();
	get_array(arr, n);
	print_array(arr, n);
	sort_array(arr,n);
	print_array(arr, n);
	return 0;
}

int get_n() {
	int n;
	scanf("%d", &n);
	return n;
}

void print_array(int arr[], int n) {
	
	for(int i = 0; i < n; i = i + 1) {
		printf("%d%s", arr[i], i < n - 1 ? " " : "\n");
	}
}

void get_array(int arr[], int n) {
	int i = 0;
	while (i < n) {
		scanf("%d", &arr[i]);
		i = i + 1;
	}
}

void sort_array(int arr[], int n) {
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
}
