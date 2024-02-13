#include <stdio.h>
#include <math.h>
int main(void) {
    double notes[6] = {100., 50., 20., 10., 5., 2.};
    double coins[6] = {1., 0.5, 0.25, 0.1, 0.05, 0.01};
    int notes_int[6] = {10000, 5000, 2000, 1000, 500, 200};
    int coins_int[6] = {100, 50, 25, 10, 5, 1};
    int notesCount[6] = {0}; // count notes of 100, 50, 20, 10, 5, 2
    int coinsCount[6] = {0}; // count coins of 1, 0.50, 0.25, 0.10, 0,05, 0,01
    double monetary = 0.;
    int mone_int;
    scanf("%lf", &monetary);
    // convert double to int and decimel to integral
    mone_int = (int) (round(monetary*100.));
    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        notesCount[i] = mone_int / notes_int[i];
        mone_int -= notes_int[i] * notesCount[i];
        printf("%d nota(s) de R$ %.2lf\n", notesCount[i], notes[i]);
    }
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        coinsCount[i] = mone_int / coins_int[i];
        mone_int -= coins_int[i] * coinsCount[i];
        printf("%d moeda(s) de R$ %.2lf\n", coinsCount[i], coins[i]);
    }
    return 0;
}
