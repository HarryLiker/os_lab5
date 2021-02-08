#include <stdio.h>
#include <math.h>

#include "lib.h"

double e(int x) {
    printf("Counting 'e' number using second remarkable limit\n");
    return pow(1 + 1.0 / x, x);
}

double Pi(int x) {
    double series_sum = 0;
    int operation = 0;
    for (int i = 1; i <= x; i++) {
        if (operation == 1) {
            series_sum -= 1.0 / (i * 2 - 1);
            //printf(" i = %d; series_num = %lf,   ", i, series_sum);
            operation = 0;
        } else {
            series_sum += 1.0 / (i * 2 - 1);
            //printf(" i = %d; series_num = %lf,   ", i, series_sum);
            operation = 1;
        }
    }
    return series_sum * 4;
}