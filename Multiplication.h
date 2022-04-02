#include <stdio.h>
#include <stdlib.h>

int Multiplication(int colsA, int rousB, int capC, int **A, int **B) {

  int** matrix_C = (int**)malloc(colsA * sizeof(int*));
  for (int i = 0; i < capC; i++) {
      matrix_C[i] = (int*)malloc(rousB * sizeof(int));
    }

  for (int i = 0; i < colsA; i++) {
    for (int j = 0; j < rousB; j++) {
        matrix_C[i][j] = 0;
        for (int k = 0; k < rousB; k++) {
          matrix_C[i][j] += A[i][k] * B[k][j];
        }
    }
  }
  return (matrix_C);
}
