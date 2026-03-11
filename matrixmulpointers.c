#include <stdio.h>
#include <stdlib.h>

void getDimensions(int *r, int *c)
{
printf("Enter the dimensions of (rows & columns): ");
scanf("%d%d", r, c);
}

int** createMatrix(int r, int c)
{
int i;
int **A = (int **)malloc(r * sizeof(int *));
for (i = 0; i < r; i++)
A[i] = (int *)malloc(c * sizeof(int));
return A;
}

void readMatrix(int **matrix, int r, int c)
{
int i, j;
printf("Enter the elements of matrix: ");
for (i = 0; i < r; i++)
{
for (j = 0; j < c; j++)
{
scanf("%d", &matrix[i][j]);
}
}
}

void displayMatrix(int **m, int r, int c)
{
int i, j;
for (i = 0; i < r; i++)
{
for (j = 0; j < c; j++)
{
printf("%d ", m[i][j]);
}
printf("\n");
}
}

int main()
{
int **a, **b, **c;
int r1, c1, r2, c2;
int i, j, k;

getDimensions(&r1, &c1);
getDimensions(&r2, &c2);

if (c1 != r2)
{
printf("Matrix multiplication not possible\n");
return 0;
}

a = createMatrix(r1, c1);
b = createMatrix(r2, c2);
c = createMatrix(r1, c2);

readMatrix(a, r1, c1);
readMatrix(b, r2, c2);

for (i = 0; i < r1; i++)
{
for (j = 0; j < c2; j++)
{
c[i][j] = 0;
for (k = 0; k < c1; k++)
{
c[i][j] += a[i][k] * b[k][j];
}
}
}

displayMatrix(c, r1, c2);

for (i = 0; i < r1; i++)
{
free(a[i]);
free(c[i]);
}
free(a);
free(c);

for (i = 0; i < r2; i++)
{
free(b[i]);
}
free(b);

return 0;
}
