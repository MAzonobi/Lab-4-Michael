#include <stdio.h>
#include <stdlib.h>

extern int sum_arrayay(int *array, int n);

int main(int argc, char *argv[])
{
    FILE *f;
    int n;
    int *array;
    int i;
    int total;

    f = fopen(argv[1], "r");

    if (f == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    fscanf(f, "%d", &n);

    array = (int *)malloc(n * sizeof(int));

    for (i = 0; i < n; i++)
    {
        fscanf(f, "%d", &array[i]);
    }

    fclose(f);

    total = sum_arrayay(array, n);

    printf("Sum = %d\n", total);

    free(array);

    return 0;
}