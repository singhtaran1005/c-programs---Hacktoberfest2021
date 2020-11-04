#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

void calculate_the_maximum(int n, int k)
{
    int i, j;
    int mand = 0, mor = 0, mxor = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if ((mand < (i & j)) && ((i & j) < k))
                mand = i & j;
            if ((mor < (i | j)) && ((i | j) < k))
                mor = i | j;
            if ((mxor < (i ^ j)) && ((i ^ j) < k))
                mxor = i ^ j;
        }
    }
    printf("%d\n%d\n%d\n", mand, mor, mxor);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
