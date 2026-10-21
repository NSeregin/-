#include <stdio.h>
#define MAX 10

int main() {
	int arr[MAX];
	int c, count_w = 0;
	int line = 1;
	
	for(int i = 0; i < MAX; i++){       
		arr[i] = 0;                        
	}
	
	while((c = getchar()) != EOF){
		if(c == '\n'){
			if(line == 1) {
				break;
			}
		line = 1;
		} else {
			line = 0;
		}
		
	
			
		if(c == ' ' || c == '\n' || c == '\t') {
			if(count_w > 0 && count_w < MAX) {
				arr[count_w]++;
			}
			count_w = 0;
		} else {
			count_w++;
		}
	}

	
	for(int i = 1; i < MAX; i++) {
		printf("%d:", i);
	for(int j = 0; j < arr[i]; j++) {
		printf("*");
	}
		printf("\n");
	}
	return 0;
}
