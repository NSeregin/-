//определение  массива и увеличение первого и последнего значения в два раза
#include <stdio.h>
int main() {
	int arr[] = {1, 2, 3, 4};
	arr[0] = arr[0] * 2;
	for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	arr[i] = arr[i] * 2;
	for(int j = 0; j < sizeof(arr) / sizeof(arr[0]); ++j)
	printf("%d ", arr[j]);
	
	return 0;
	
}
