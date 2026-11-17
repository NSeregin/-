/*Серегин Никита 17.11.2026
1.2. Выбрать из таблицы Заказчики столбцы Фамилия, Город, [Код продавца]*/
#include <stdio.h>
#define MAX 100

typedef struct {
	int cnum;
	char cname[30];
	char city[20];
	int rating;
	int snum; //код продавца
}Customer;

int main() {
	Customer customer_people[MAX] = {
		{2001, "Antonov", "Vladimir", 100, 1001},
		{2002, "Leonteva", "Vladimir", 200, 1003},
		{2003, "Sinicki", "Kovrov", 200, 1002},
		{2004, "Fokin", "Iaroslavl", 300, 1002},
		{2006, "Simonian", "Moskva", 100, 1001},
		{2008, "Nazarova", "Riazan", 300, 1007},
		{2007, "Aliev", "Kovrov", 100, 1004}
	};
	int total = 7;
	printf("Customers \"Roga and Co\"\n");
	printf("Surname\t\tcity \t\tid_saler\n");
	printf("====================================================\n");
	for (int i = 0; i < total; i = i + 1) {
		printf("%-15s\t%-15s\t%-15d\t\n", 
			   customer_people[i].cname,
			   customer_people[i].city,
			   customer_people[i].snum);
			  
	}
	return 0;
}
