//
// Created by user on 10-Oct-22.
//
#include <stdio.h>
#include <math.h>

int msb(int x) {
    int k;
    return k = (int)log2(x);
    }

int lsb(int x) {

    int count = 0;
    while (x >= 0) {
        if (x & 1) {
            return count;
        }
        x >>= 1;
        count++;
    }
}

int main() {
    int x;
    printf("Enter a non negative number: ");
    scanf("%d", &x);
    printf("the distance between the first and last bits set to 1 is: %u", (msb(x) - lsb(x)));
}
