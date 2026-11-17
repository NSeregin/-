/*Серегин Никита 17.11.2026
1.4. Распечатать список продавцов в порядке, обратном алфавитному*/
#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct { // Продавец
	int snum; // Код продавца 
	char sname[30]; // Фамилия
	char city[20]; // Город 
	float comm; // Комиссия
} Saler;

int main() {
	Saler salers[MAX] = {
		{1001, "Ivanov",  "Kovrov", 0.12},
		{1002, "Petrov", "Vladimir", 0.13},
		{1004, "Sidorov", "Kovrov", 0.11},
		{1007, "Andreichenko", "Iaroslavl", 0.15},
		{1003, "Simonian", "Moskva", 0.10}
	};
	int total = 5;
	
	for(int i = 0; i < total - 1; i++) {
		for(int j = 0; j < total - 1 - i; j++) {
			if(strcmp(salers[j].sname, salers[j + 1].sname) < 0) {
				Saler tmp = salers[j];
				salers[j] = salers[j + 1];
				salers[j + 1] = tmp;
			}
		}
	}
	printf("List of salers\n");
	printf("salers\n");
	printf("====================================================\n");
	for (int i = 0; i < total; i = i + 1) {
		printf("%s\n", 
			   salers[i].sname);
			   
		
		
	}
	return 0;	
}
