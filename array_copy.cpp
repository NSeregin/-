/*Серегин Н.А 16.10
Копирование массивов*/

#include <stdio.h>
#define MAX 100
int main() {
	
	int dst[MAX] = {1,2,3,4,0};
	int src[MAX] = {1,3,5,4,6,0};
	
	int count = 0;
	for(int i = 0; dst[i] != 0; i = i + 1) { 
		 count = count + 1; 
	}
	for(int i = 0; i < MAX; i++){
		 dst[i] = src[i];
	}
	for(int i = 0; i < dst[count]; i++) {
		printf("%d", dst[i]);
	}
	return 0;
}
