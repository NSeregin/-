/*Серегин Никита 18.11.2026
2.3. Выбрать покупателей, обслуживаемых ковровскими продавцами (то есть продавцами, у которых [Код продавца] = 1001 или [Код продавца] = 1004)*/

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
	printf("Customers\n");
	printf("==============================\n");
	for(int i = 0; i < total; i++) {
		if(customers[i].snum == 1001 || customers[i].snum == 1004 ) {
			printf("%-15s\n",
				customers[i].cname);
			
		}
	}
}
