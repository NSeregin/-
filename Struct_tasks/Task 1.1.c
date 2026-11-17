/*Серегин Никита 17.11.2026 
1.1. Выбрать все записи из таблицы Продавцы*/
#include <stdio.h>
#define MAX 100

typedef struct {
	int id_saler;
	char SNP[MAX];
	char city[20];
}Saler;

int main() {
	Saler saler_people[MAX] = {
		{1, "Sokolov Maksim Sergeevich", "Konakovo"},
		{2, "Kotov Matview Sergeevich", "Moskva"}
	};
	int total = 2;
	printf("Firm's cityes \"Roga and Co\"\n");
	printf("Id\tSNP \t		\tCity\n");
	printf("====================================================\n");
	for (int i = 0; i < total; i = i + 1) {
		printf("%d\t%-15s\t%-8s\t\n", 
			   saler_people[i].id_saler,
			   saler_people[i].SNP,
			   saler_people[i].city);
			   
}
	return 0;
}
