#include "Transposing.h"
#include "MatrixA.h"
#include "MatrixB.h"
#include "Multiplication.h"
#include "Summ.h"


int matrix_A(int cols, int rous, int cap); // СЧИТЫВАНИЕ МАТРИЦЫ (А)
int matrix_B(int cols, int rous, int cap); // СЧИТЫВАНИЕ МАТРИЦЫ (B)
int Transposing_matrices(int cols, int rous, int cap, int** matrix);
int Multiplication(int colsA, int rousB, int capC, int **A, int **B);
int Summ(int colsC, int rousC, int capC, int **A, int **B);

int main(void) {

    int colsA = 4, rousA = 4, cap = 4;
    printf("Введите размерность матрицы А (n*m): ");
    scanf("%d", &colsA);
    scanf("%d", &rousA);

    int colsB = 4, rousB = 4;
    printf("Введите размерность матрицы B (n*m): ");
    scanf("%d", &colsB);
    scanf("%d", &rousB);

//____________________СЧИТЫВАНИЕ_МАТРИЦЫ_______________________________
printf("__ВВЕДИТЕ МАТРИЦУ_(A)_РАЗМЕРНОСТЬЮ_(%d * %d):__\n\n", colsA, rousA);

    int **matrixA = matrix_A(colsA, rousA, cap); // A МАТРИЦА

printf("__ВВЕДИТЕ_МАТРИЦУ_(B)_РАЗМЕРНОСТЬЮ_(%d * %d):__\n\n", colsB, rousB);

    int **matrixB = matrix_B(colsB, rousB, cap); // B МАТРИЦА

printf("________________________________________\n\n");


//___________________ВЫВОД_ТРАНСПОНИРОВАННОЙ_МАТРИЦЫ (A)________________

printf("_____ТРАНСПОНИРОВАННАЯ_МАТРИЦА_(А):______\n\n");

    int **matrix_Tran = Transposing_matrices(colsA, rousA, cap, matrixA);

    for (int i = 0; i < rousA; i++) {
        for (int j = 0; j < colsA; j++) {
            printf("%3d", matrix_Tran[i][j]);
        }
        printf("\n");
    }

//____________ВЫВОД__УМНОЖЕНИЯ_МАТРИЦЫ_(А)_на_(B)______________________

printf("______УМНОЖЕНИЕ_МАТРИЦЫ_(А)_на_(B):_____\n\n");
  if (colsA == rousB) {

    int **matrixC_mul = Multiplication(colsA, rousB, cap, matrixA, matrixB); // C МАТРИЦА
    for (int i = 0; i < colsA; i++) {
        for (int j = 0; j < rousB; j++) {
            printf("%3d ", matrixC_mul[i][j]);
        }
        printf("\n");
    }
    
  } else {printf("Неккоректрные матрицы для умножения");}
//____________ВЫВОД__СЛОЖЕНИЯ_МАТРИЦЫ_(А)_на_(B)______________________

printf("____________СЛОЖЕНИЕ_(А)_и_(B):_________\n\n");
  if ((colsA == rousA) && (colsB == rousB)) {

    int **matrixC_sum = Summ(colsA, rousB, cap, matrixA, matrixB); // C МАТРИЦА
    for (int i = 0; i < colsA; i++) {
        for (int j = 0; j < rousB; j++) {
            printf("%3d ", matrixC_sum[i][j]);
        }
        printf("\n");
    }

  } else {printf("Неккоректрные матрицы для сложения");}

//_____________________________________________________________________
    return 0;
}