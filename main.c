#include <stdio.h>
#include "stats.h"

int main(void) {
    int scores[] = {60, 75, 90};
    size_t n = sizeof(scores) / sizeof(scores[0]);
    printf("Total: %d\n", sum(scores, n));
    printf("Average: %.2f\n", (double)sum(scores, n) / n);
    return 0;
}
