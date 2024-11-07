#include <stdio.h>
#include <limits.h>

void print_fibonacci_sequence() {
    unsigned long long prev1 = 0, prev2 = 1;
    unsigned long long result = 0;
    int i = 1;

    printf("Fibonacci(0) = %llu\n", prev1);
    printf("Fibonacci(1) = %llu\n", prev2);

    while (1) {
        result = prev1 + prev2;
        if (result < prev2) {
            printf("系統能表示最大 Fibonacci 數為 Fibonacci(%d) = %llu\n", i, prev2);
            break;
        }
        printf("Fibonacci(%d) = %llu\n", i + 1, result);
        prev1 = prev2;
        prev2 = result;
        i++;
    }
}

int main() {
    print_fibonacci_sequence();
    return 0;
}
