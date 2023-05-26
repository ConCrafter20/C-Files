//basic things that makes easier
#include <stdio.h>
#include <string.h>


int el(int amout) {
    for (int i = 0; i < amout; i++) {
        printf("\n");
    }
}

int varprintf(char str1[6969], char variable[6969], char str2[6969]) {
    printf(str1);
    el(1);
    printf(variable);
    el(1);
    printf(str2);
}