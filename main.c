#include <stdbool.h>
#include <stdio.h>

bool isPowerOfTwo(int n);

int main() {
    printf("%d\n", isPowerOfTwo(1));

    printf("%d\n", isPowerOfTwo(16));

    printf("%d\n", isPowerOfTwo(3));

    return 0;
}

bool isPowerOfTwo(int n) {
    if (n < 1) {
        return false;
    }

    long long num = 1;
    while (true) {
        if (num == n) {
            return true;
        }

        if (num > n) {
            break;
        }

        num *= 2;
  }

    return false;
}