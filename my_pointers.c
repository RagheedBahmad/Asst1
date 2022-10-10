//
// Created by user on 10-Oct-22.
//
// this code is non-functional but im going to submit it anyway
#include <stdio.h>

char * merge(char *c1, char *c2, int x1, int x2) {
    char *c3[x1 + x2];
    for (int k = 0; k < x1 + x2; k++) {
        for (int i = 0; i < x1; i++) {
            for (int j = 0; j < x2; j++) {
                if ((*c1 + i) < (*c2 + j)) {
                    *c3[k] = (*c1 + i);
                } else {
                    *c3[k] = (*c2 + j);
                }
            }
        }
    }
}

int main() {
    char *c1[] = {"ab", "ac"};
    char *c2[] = {"za", "zb", "zzzzc"};
    char * c3 = merge(c1, c2, 2, 3);
        printf("%s", *c3);

    return 0;
}
