//
// Created by user on 10-Oct-22.
//
#include <stdio.h>

int hammingDistance(int n1, int n2)
{
    int x = n1 ^ n2;
    int setBits = 0;

    while (x > 0) {
        setBits += x & 1;
        x >>= 1;
    }

    return setBits;
}

// Driver code
int main() {

    int x1 = 0, x2;
    printf("\nEnter a pair of non negative integers:");
    while (x1 >= 0) {
        scanf("%u %u", &x1, &x2);
        if (x1 < 0)
            return 0;
        printf("%d\n", hammingDistance(x1, x2));
    }
    return 0;
}

