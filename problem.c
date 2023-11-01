#include <stdio.h>

#define MAT1 2
#define MAT2 3


void pprint_mat(int *mat, int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("| %-3d |", *(mat + i * n + j)); // Pointer arithmetic to access matrix elements
        }
        printf("\n");
    }
}

int main(void)
{
    printf("+-----+------+------+\n");
    printf("|     |       |     |\n");
    printf("+-----+------+------+\n");
    int mat[MAT1][MAT2] = {
        {1, 2, 3},
        {4, 5, 6}};

    pprint_mat((int *)mat, 2, 3); // Pass the address of the first element and dimensions
    return 0;
}
