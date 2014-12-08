#include "FibonacciUtils.h"

int FibonacciUtils::getNthFibonacci(int i) {
    if (i == 0) {
        return 1;
    } else if (i == 1) {
        return 1;
    } else {
        return (getNthFibonacci(i-1) + getNthFibonacci(i-2));
    }
}
