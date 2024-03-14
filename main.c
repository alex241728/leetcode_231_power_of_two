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

    // n AND n - 1 always returns 0 if n is power of two because if n is power of two, there is only one '1' in binary
    //    <----- binary ---->
    //    n     n    n-1     n&(n-1)
    //    --  ----   ----     -------
    //    0   0000   0111    0000 *
    //    1   0001   0000    0000 *
    //    2   0010   0001    0000 *
    //    3   0011   0010    0010
    //    4   0100   0011    0000 *
    //    5   0101   0100    0100
    //    6   0110   0101    0100
    //    7   0111   0110    0110
    //    8   1000   0111    0000 *
    //    9   1001   1000    1000
    //   10   1010   1001    1000
    //   11   1011   1010    1010
    //   12   1100   1011    1000
    //   13   1101   1100    1100
    //   14   1110   1101    1100
    //   15   1111   1110    1110

    return (n & (n - 1)) == 0;
}