#include <stdio.h>

int main() {
    int i;
    int *p;

    i = 0;
    p = &i;

    for (*p = 0; *p < 10; (*p)++) {
        printf("%d\n", i);
    }

    return 0;
}
