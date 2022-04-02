#pragma once
#include <stdio.h>
#include <stdlib.h>

int matrix_A(int colsA, int rousA, int capA) {

    int** matrix_A = (int**)malloc(colsA * sizeof(int*));
    for (int i = 0; i < capA; i++) {
        matrix_A[i] = (int*)malloc(rousA * sizeof(int));
    }

    for (int i = 0; i < colsA; i++) {
        for (int j = 0; j < rousA; j++) {
            scanf("%d", &matrix_A[i][j]);
        }
    }

    return matrix_A;
}