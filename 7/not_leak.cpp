#include <cstdlib>

void not_leak(int n) {
    int *x;
    x = (int *)malloc(n * sizeof(int));
    free(x);
}

int main() {
    int i;
    for (i=0; i<100; i++)
        not_leak(100);
    return 0;
}
