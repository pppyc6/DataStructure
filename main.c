#include <math.h>
#include <stdlib.h>
long int Power(long int X, int N)
{
    long int result = 1;
    long int *array;
    int arrlength, i;
    arrlength = (int)log2(N) + 1;
    array = (long int *)malloc(sizeof(long int) * arrlength);
    array[0] = X;
    for (i = 1; i < arrlength; i++)
    {
        array[i] = array[i - 1] * array[i - 1];
    }
    for(i = 0; i < arrlength; i ++)
    {
        printf("array[%d] = %ld\n", i, array[i]);
    }
    for (i = 0; N > 0; N /= 2, i++)
    {
        if (N % 2 == 1)
            result *= array[i];
    }
    free(array);
    return result;
}
#include <stdio.h>
int main ()
{
    int i, n;

    for(i = 0; i < n; i ++)
    {
        printf("%d\n", n);
    }

    return 0;
}