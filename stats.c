#include "stats.h"
int sum(const int *scores, size_t n) {
    int total = 0;
    for (size_t i = 0; i < n; ++i) total += scores[i];
    return total;
}
