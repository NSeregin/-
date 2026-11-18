/*Серегин Никита 18.11.2026
 2.4 Выбрать заказы Фокина, упорядочив по возрастанию суммы (то есть заказы, для которых [Код заказчика] = 2004)*/
#include <stdio.h>
#define MAX 10
typedef struct { // Дата
	int year;
	int month;
	int day;
} Date;

typedef struct { // Заказ
	int onum; // Код заказа
	int snum; // Код продавца
	int cnum; // Код заказчика
	Date odate; //Дата заказа
	float amt; //Сумма заказа
} Order;

int main() {
	Order orders[MAX] = {
		{3001, 1007, 2001, {03,10,2006}, 18.69},
		{3003, 1001, 2001, {03,10,2006}, 767.19},
		{3002, 1004, 2007, {03,10,2006}, 1900.10},
		{3005, 1002, 2003, {03,10,2006}, 5160.45},
		{3006, 1007, 2008, {03,10,2006}, 1098.16},
		{3009, 1003, 2002, {03,10,2006}, 1713.23},
		{3007, 1002, 2004, {03,10,2006}, 75.75},
		{3008, 1001, 2006, {03,10,2006}, 4723.00},
		{3010, 1002, 2004, {03,10,2006}, 1309.95},
		{3011, 1001, 2006, {03,10,2006}, 9891.88}
		
	};
	int total = 10;
	
	Order fokin[MAX];
	int fokin_count = 0;
	
	for (int i = 0; i < total; i++) {
		if (orders[i].cnum == 2004) {
			fokin[fokin_count] = orders[i];
			fokin_count++;
		}
	}	

	for(int i; i < fokin_count - 1; i++) {
		for(int j; j < fokin_count - 1 - i; j++) {
			if(fokin[j].onum > fokin[j + 1].onum) {
				Order t = fokin[j];
				fokin[j] = fokin[j + 1];
				fokin[j + 1] = t;
			}
		}
	}
		printf("Fokin's orders\n");
	printf("order\t\tsum\n");
	printf("====================================================\n");
	for(int i = 0; i < fokin_count; i++) {

		printf("%-15d\t%-10.2f\n",
			   fokin[i].onum,
			   fokin[i].amt);
	
}
	return 0;
}
