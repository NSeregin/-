/*Серегин Никита 19.11.2026
2.5. Выбрать заказы, сделанные 3 или 4 октября 2006 г.*/

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
		{3001, 1007, 2001, {2006,10,3}, 18.69},
		{3003, 1001, 2001, {2006,10,3}, 767.19},
		{3002, 1004, 2007, {2006,10,3}, 1900.10},
		{3005, 1002, 2003, {2006,10,3}, 5160.45},
		{3006, 1007, 2008, {2006,10,3}, 1098.16},
		{3009, 1003, 2002, {2006,10,4}, 1713.23},
		{3007, 1002, 2004, {2006,10,4}, 75.75},
		{3008, 1001, 2006, {2006,10,5}, 4723.00},
		{3010, 1002, 2004, {2006,10,6}, 1309.95},
		{3011, 1001, 2006, {2006,10,6}, 9891.88}
		
	};
	int total = 10;
	printf("Orders 3 OR 4 of October 2006 year.\n");
	printf("Cod of order\tCod of saller \tCod of customer   \tDate	\tSumm\n");
	printf("==================================================================\n");
    for(int i = 0; i < total; i++) {
	if(orders[i].odate.year == 2006 
	   && orders[i].odate.month == 10
	   && (orders[i].odate.day == 3 || orders[i].odate.day == 4)) {
	   printf("%-6d\t%02d.%02d.%04d\t%-10.2f\n",
		   orders[i].onum,
		   orders[i].odate.day,
		   orders[i].odate.month,
		   orders[i].odate.year,
		   orders[i].amt);
	}
}
return 0;
}

