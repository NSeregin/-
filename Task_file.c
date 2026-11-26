#include <stdio.h>
#define MAX 100

typedef struct {
	int id;
	char name[50];
	int summa;
}Workers;

int main() {
	Workers work[MAX];
	int count = 0;
	FILE* f1 = fopen("workers.txt", "r");
	if(f1 == NULL) {
		printf("File workers.txt not found!");
		return 1;
	}
	while(fscanf(f1, "%d %s", &work[count].id, &work[count].name) == 2) {
		count = count + 1;
	}	
	fclose(f1);
	
	FILE* f2 = fopen("salary.txt", "r");
	if(f2 == NULL) {
		printf("File salary.txt not found!");
		return 1;
	}
	int t_id, t_summa;
	while(fscanf(f2, "%d %d", &t_id, &t_summa) == 2){
		for(int i = 0; i < count; i++) {
			if(work[i].id == t_id) {
				work[i].summa = t_summa;
				break;
			}
		}
	}
	fclose(f2);
	
	/*printf("ID | Name       | Summa\n");
	for (int i = 0; i < count; i++) {
		printf("%d  | %-10s | %d\n", work[i].id, work[i].name, work[i].summa);
	} */
	
	FILE *out = fopen("out.txt", "w");
	if(out == NULL) {
		printf("File out.txt not create!");
	}
	fprintf(out, "Vedomost na zarabotnyiy platy\n");
	fprintf(out, "Id\t|Name\t|Summa\n");
	int total = 0;
	for(int i = 0; i < count; i++) {
		fprintf(out, "%d\t%s\t%d\n", work[i].id, work[i].name, work[i].summa);
		total = total + work[i].summa;
	}
	fprintf(out, "Result: %d\n", total);
	fclose(out);
	printf("Succses!");
	return 0;
}
