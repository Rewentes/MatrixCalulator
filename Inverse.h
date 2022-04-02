#pragma once
#include <stdio.h>
#include <stdlib.h>

int Inverse_matrix(int cols, int rous, int cap, int** matrix) {

    int** matrix_Inverse = (int**)malloc(rous * sizeof(int*));
    for (int i = 0; i < rous; i++) {
        matrix_Inverse[i] = (int*)malloc(cols * sizeof(int));
    }

    

}