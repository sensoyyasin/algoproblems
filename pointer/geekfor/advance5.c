#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i = 1;
    int *ptr = (int *)malloc(5 * sizeof(int));

    while (i <= 5)
    {
        i++;
        *(ptr + i) = i;
    }
    printf("%d\n", *ptr++);
    printf("%d\n", (*ptr)++);
    printf("%d\n", *ptr);
    printf("%d\n", *++ptr);
    printf("%d\n", ++*ptr);
}