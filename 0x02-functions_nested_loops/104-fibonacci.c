#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 * 1 and 2, seperated by a comma followed by a space.
 * Return: Always 0
 */

int main() {
    long long a = 1, b = 2, even_sum = 0;
    long long limit = 4000000;

    while (a <= limit) {
        if (a % 2 == 0) {
            even_sum += a;
        }
        long long next = a + b;
        a = b;
        b = next;
    }

    printf("%lld\n", even_sum);

    return 0;
}
