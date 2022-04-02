#pragma once
#include <stdio.h>
#include <stdlib.h>

int matrix_B(int colsB, int rousB, int capB) {

    int** matrix_B = (int**)malloc(colsB * sizeof(int*));
    for (int i = 0; i < capB; i++) {
        matrix_B[i] = (int*)malloc(rousB * sizeof(int));
    }

    for (int i = 0; i < colsB; i++) {
        for (int j = 0; j < rousB; j++) {
            scanf("%d", &matrix_B[i][j]);
        }
    }

    return matrix_B;
}