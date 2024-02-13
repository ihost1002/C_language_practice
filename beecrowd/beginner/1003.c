#include <stdio.h>
int main(void) {
    int n[2] = {0};
    for (int i = 0; i < 2; i++) {
        scanf("%d", &n[i]);
    }
    printf("SOMA = %d\n", n[0]+n[1]);
    return 0;
}
