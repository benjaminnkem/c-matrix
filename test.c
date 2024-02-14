#include <stdio.h>

// Function to input elements into a matrix
void inputMatrix(int rows, int cols, int matrix[rows][cols])
{
  printf("Enter the elements of the matrix:\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("Enter element [%d][%d]: ", i, j);
      scanf("%d", &matrix[i][j]);
    }
  }
}

// Function to add two matrices
void addMatrices(int rows, int cols, int matrix1[rows][cols], int matrix2[rows][cols], int result[rows][cols])
{
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      result[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }
}

// Function to display a matrix
void displayMatrix(int rows, int cols, int matrix[rows][cols])
{
  printf("Resultant Matrix:\n");
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < cols; j++)
    {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
}

int main()
{
  int rows, cols;

  // Input the dimensions of matrices
  printf("Enter the number of rows: ");
  scanf("%d", &rows);
  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  // Define the matrices
  int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

  // Input elements for the first matrix
  printf("\nEnter elements for the first matrix:\n");
  inputMatrix(rows, cols, matrix1);

  // Input elements for the second matrix
  printf("\nEnter elements for the second matrix:\n");
  inputMatrix(rows, cols, matrix2);

  // Add the matrices
  addMatrices(rows, cols, matrix1, matrix2, result);

  // Display the result
  displayMatrix(rows, cols, result);

  return 0;
}
