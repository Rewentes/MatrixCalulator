#include <stdio.h>
#include <stdlib.h>

int Summ(int colsC, int rousC, int capC, int **A, int **B) {
    
  int** matrix_C_sum = (int**)malloc(colsC * sizeof(int*));
  for (int i = 0; i < capC; i++) {
      matrix_C_sum[i] = (int*)malloc(rousC * sizeof(int));
    }

  for (int i = 0; i < colsC; i++) {
    for (int j = 0; j < rousC; j++) {
          matrix_C_sum[i][j] = A[i][j] + B[i][j];
    }
  }
  return (matrix_C_sum);
}
