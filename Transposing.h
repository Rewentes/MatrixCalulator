#pragma once
#include <stdio.h>
#include <stdlib.h>

int Transposing_matrices(int cols, int rous, int cap, int** matrix) {

    int** matrix_Tran = (int**)malloc(rous * sizeof(int*));
    for (int i = 0; i < rous; i++) {
        matrix_Tran[i] = (int*)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rous; j++) {
            matrix_Tran[j][i] = matrix[i][j];
        }
    }

    return matrix_Tran;
}