#include <cstdlib>

void leak(int n) {
    int *x;
    x = (int *)malloc(n * sizeof(int));
}


int main() {
    int i;
    for (i=0; i<100; i++)
        leak(100);
    return 0;
}
