#include <stdio.h>

int calculate2x2Matrix(int a1, int a2, int a3, int a4, int b1, int b2, int b3, int b4)
{
  int r1c1 = (a1 * b1) + (a2 * b3);
  int r1c2 = (a1 * b2) + (a2 * b4);
  int r2c1 = (a3 * b1) + (a4 * b3);
  int r2c2 = (a3 * b2) + (a4 * b4);

  printf("Row 1, Col 1: %d\n", r1c1);
  printf("Row 1, Col 2: %d\n", r1c2);
  printf("Row 2, Col 1: %d\n", r2c1);
  printf("Row 2, Col 2: %d\n", r2c2);
}

int main()
{
  // Matrix solving problem
  int a1;
  int a2;
  int a3;
  int a4;

  int b1;
  int b2;
  int b3;
  int b4;

  printf("enter a1: ");
  scanf("%d", &a1);

  printf("enter a2: ");
  scanf("%d", &a2);

  printf("enter a3: ");
  scanf("%d", &a3);

  printf("enter a4: ");
  scanf("%d", &a4);

  printf("enter b1: ");
  scanf("%d", &b1);

  printf("enter b2: ");
  scanf("%d", &b2);

  printf("enter b3: ");
  scanf("%d", &b3);

  printf("enter b4: ");
  scanf("%d", &b4);

  calculate2x2Matrix(a1, a2, a3, a4, b1, b2, b3, b4);

  return 0;
}