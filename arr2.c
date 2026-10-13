//определение  массива и увеличение первого и последнего значения в два раза
#include <stdio.h>
int main() {
	int arr[] = {1, 2, 3, 4};
	arr[0] = arr[0] * 2;
	arr[3] = arr[3] * 2;
	for(int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i)
	printf("%d ", arr[i]);
	return 0;
	
}
