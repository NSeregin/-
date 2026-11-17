/*Серегин Никита 17.11.2026
1.3. Выбрать из таблицы Заказы сведения о номере заказа и сумме, упорядочив по номеру заказа*/
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
for(int i = 0; i < total - 1; i++) {
	for(int j = 0; j < total - 1 - i; j++){
		if(orders[j].onum > orders[j+1].onum) {
			Order tmp = orders[j];
			orders[j] = orders[j + 1];
			orders[j + 1] = tmp;
		}
	}
}
	printf("Orders sorted by order number\n");
	printf("order\tsum\n");
	printf("====================================================\n");
	for (int i = 0; i < total; i = i + 1) {
		printf("%-6d\t%-10.2f\n", 
			   orders[i].onum,
			   orders[i].amt);
			   
		
	}
	return 0;	
}

