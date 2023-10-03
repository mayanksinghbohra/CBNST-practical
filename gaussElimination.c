#include <stdio.h>
#define N 3 // Number of equations and variables void printMatrix(float matrix[N][N + 1]) {
for (int i = 0; i < N; i++) {
for (int j = 0; j < N + 1; j++) { printf("%.2f\t", matrix[i][j]);
}
printf("\n");
}
}
void gaussianElimination(float matrix[N][N + 1]) {
// Forward elimination
for (int col = 0; col < N - 1; col++) {
for (int row = col + 1; row < N; row++) {
float factor = matrix[row][col] / matrix[col][col]; for (int i = col; i < N + 1; i++) {
matrix[row][i] -= factor * matrix[col][i];
}
