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

void arrayHistogram(int c[]) {
    int count[] = {0, 0, 0};
    int n;
    for (int i = 0; i < 10; i++) {
        n = c[i] - 1;
        count[n] += 1;
    }
    printf("Value Frequency Histogram\n");
    for (int i = 0; i < 3; i++) {
        printf("%5d %9d", i + 1, count[i]);
        for (int j = 0; j <count[i]; j++) {
            printf(" %c", '*');
        }
        printf("\n");
    }
}

void swapValues(int c[], int x1, int x2) {
    int n = c[x1];
    c[x1] = c[x2];
    c[x2] = n;
}

void bubbleSort(int c[]) {
    int n = sizeof(c);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n - i; j++) {
            if (c[j] > c[j + 1]) {
                swapValues(c, j, j + 1);
            }
        }
    }
}

int median(int c[]) {
    bubbleSort(c);
    return c[(sizeof(c) / 2)];
}

int mode(int c[]) {
    int count[] = {0, 0, 0};
    int n;
    for (int i = 0; i < 10; i++) {
        n = c[i] - 1;
        count[n] += 1;
    }
    int k = count[0];
    int index = 1;
    for (int i = 1; i < 3; i++) {
        if (count[i] > k) {
            k = count[i];
            index = i + 1;
        }
    }
    return index;
}

int isSorted(int c[]) {
    for (int i = 1; i < sizeof(c); i++) {
        if (c[i] < c[i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int Array[SIZE] = {2,1,3,1,2,3,3,3,2,1};
    printArray(Array);
    arrayHistogram(Array);
    swapValues(Array, 1, 2);
    printArray(Array);
//    bubbleSort(Array);
    printArray(Array);
    printf("mode of Array: %d", mode(Array));
    printf("\n");
    printf("is it sorted?: %d", isSorted(Array));
    return 0;
}

