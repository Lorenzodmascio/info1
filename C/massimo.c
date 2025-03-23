#include <stdio.h>

int trovaMassimo(int *v, int n) {
    int *p = v; 
    int massimo = *p;

    // Scorro il vettore
    for (int i = 1; i < n; i++) {
        p++; 
        if (*p > massimo) {
            massimo = *p;
        }
    }

    return massimo;
}

int main() {
    int v[] = {1, 4, 7, 3, 8, 5};
    int massimo = trovaMassimo(v, n);
    printf("Il massimo del vettore è: %d\n", massimo);

    return 0;
}
