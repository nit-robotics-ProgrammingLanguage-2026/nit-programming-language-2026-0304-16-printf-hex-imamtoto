#include <stdio.h>

int main(void) {
    int i;

    if (scanf("%d", &i) != 1) {
        return 1;
    }

    printf("%x\n", (unsigned int)i);
    return 0;
}
