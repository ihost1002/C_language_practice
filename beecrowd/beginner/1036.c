#include <stdio.h>
#include <math.h>
int main(void) {
    double n[3] = {0.}, delta = 0., R1 = 0., R2= 0.;
    for (int i = 0; i < 3; i++) {
        scanf("%lf", &n[i]);
    }
    delta = n[1]*n[1] - 4*n[0]*n[2];
    if (n[0] == 0.0 || delta < 0.0)
        printf("Impossivel calcular\n");
    else {
        R1 = (-n[1] + sqrt(delta)) / (2.*n[0]);
        R2 = (-n[1] - sqrt(delta)) / (2.*n[0]);
        printf("R1 = %.5lf\nR2 = %.5lf\n", R1, R2);
    }
    return 0;
}
