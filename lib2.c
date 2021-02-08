#include <stdio.h>

double e(int x) {
    printf("Counting 'e' number using Taylor series\n");
    double answer = 0;
    unsigned long long factorial = 1;
    for (int i = 0; i <= x; ++i) {
        if (i != 0) {
            factorial *= i;
        }
        answer += 1.0 / factorial;
    }
    return answer;
}

double Pi(int x) {
    double answer = 1;
    for (int i = 1; i <= x; i++) {
        //answer *= 1.0 * (2 * i) * (2 * i) / ((2 * i - 1) * (2 * i + 1));
        answer *= 1.0 * (2 * i) / (2 * i - 1) * (2 * i) / (2 * i + 1);
    }
    return 2 * answer;
}