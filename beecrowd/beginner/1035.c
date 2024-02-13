#include <stdio.h>
int main(void) {
    int n[4] = {0};
    for (int i = 0; i < 4; i++) {
        scanf("%d", &n[i]);
    }
    if (n[1] > n[2] && n[3] > n[0] && (n[2]+n[3]) > (n[0]+n[1]) \
        && n[2] > 0 && n[3] > 0 && n[0] % 2 == 0) {
        printf("Valores aceitos\n");
    } else
        printf("Valores nao aceitos\n");
    return 0;
}
