#include <stdio.h>
int main(void) {
	double notes[6] = {100., 50., 20., 10., 5., 2.};
	double coins[6] = {1., 0.5, 0.25, 0.1, 0.05, 0.01};
	int notesCount[6] = {0}; // count notes of 100, 50, 20, 10, 5, 2
	int coinsCount[6] = {0}; // count coins of 1, 0.50, 0.25, 0.10, 0,05, 0,01
	double monetary = 576.43;
	//scanf("%lf", &monetary);
	printf("NOTAS:\n");
	for (int i = 0; i < 6; i++) {
		notesCount[i] = (int) (monetary/notes[i]);
		monetary = monetary - notes[i]*notesCount[i];
		printf("%d nota(s) de R$ %.2lf\n", notesCount[i], notes[i]);
		//printf("%d: monetary=%lf, notesCount[%d]=%d\n", i, monetary, i, notesCount[i]);
	}
	printf("MOEDAS:\n");
	for (int i = 0; i < 6; i++) {
		//printf("before: monetary=%lf, coins=%lf\n", monetary, coins[i]);
		coinsCount[i] = (int) (monetary/coins[i]);
		monetary = monetary - coins[i]*coinsCount[i];
		printf("%d moeda(s) de R$ %.2lf\n", coinsCount[i], coins[i]);
		//printf("%d: monetary=%lf, coinsCount[%d]=%d\n", i, monetary, i, coinsCount[i]);
	}
	return 0;
}
