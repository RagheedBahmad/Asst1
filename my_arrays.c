//
// Created by user on 10-Oct-22.
//
#define SIZE 10
#include <stdio.h>

void printArray(int c[]) {
    printf("Index  Value\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%5d  %5d\n", i, c[i]);
    }
}

int main() {
    int Array[SIZE] = {1,2,3,1,2,3,3,3,2,1};
    printArray(Array);
    return 0;
}

