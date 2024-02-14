#include <stdio.h>

int main()
{
  int row, col, a[10][10], b[10][10], c[10][10];

  printf("enter no of row: ");
  scanf("%d", &row);

  printf("enter no of col: ");
  scanf("%d", &col);

  for (int i = 0; i < row; i++)
  {

    for (int j = 0; j < col; j++)
    {
      printf("enter the element of a %d%d: ", i++, j++);
      scanf("%d", &a[i][j]);
      // printf("this is the first iteration - i: %d, j: %d\n", i, j);
    }
  };

  for (int i = 0; i < row, i++;)
  {
    for (int j = 0; j < col; j++)
    {
      printf("enter the element of b %d%d: ", i++, j++);
      scanf("%d", &b[i][j]);
    }
  };

  for (int i = 0; i < row, i++;)
  {
    for (int j = 0; j < col; j++)
    {
      c[i][j] = a[i][j] + b[i][j];
    }
  }

  for (int i = 0; i < row, i++;)
  {
    for (int j = 0; j < col; j++)
    {
      printf("%d", c[i][j]);

      if (j == col)
      {
        printf("\n");
      }
    }
  }
}
