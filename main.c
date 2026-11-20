#include <stdio.h>
#include "stats.h"

int main(void) {
    int scores[] = {60, 75, 90, 95};
    size_t n = sizeof(scores) / sizeof(scores[0]);
    printf("Total: %d\n", sum(scores, n));
    printf("Average score: %.2f\n", (double)sum(scores, n) / n);
    int maximum = scores[0];
    for (size_t i = 1; i < n; ++i)
        if (scores[i] > maximum) maximum = scores[i];
    printf("Maximum: %d\n", maximum);
    return 0;
}
