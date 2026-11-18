/*Серегин Никита 18.11.2026
2.1. Выбрать ковровских заказчиков*/ // 
#include <stdio.h>
#include <string.h>
#define MAX 100

typedef struct {
	int cnum;
	char cname[30];
	char city[20];
	int rating;
	int snum; //код продавца
}Customer;

int main() {
	Customer customers[MAX] = {
		{2001, "Antonov", "Vladimir", 100, 1001},
		{2002, "Leonteva", "Vladimir", 200, 1003},
		{2003, "Sinickin", "Kovrov", 200, 1002},
		{2004, "Fokin", "Iaroslavl", 300, 1002},
		{2006, "Simonian", "Moskva", 100, 1001},
		{2008, "Nazarova", "Riazan", 300, 1007},
		{2007, "Aliev", "Kovrov", 100, 1004}
	};
	int total = 7;
	printf("Kovrov's customers\n");
	printf("Customers\t city\n");
	printf("==============================\n");
	for(int i = 0; i < total; i++) {
		if(strcmp(customers[i].city, "Kovrov") == 0) {
			printf("%-15s\t%-15s\n",
				   customers[i].cname,
				   customers[i].city);
				   
		}
	}
}
