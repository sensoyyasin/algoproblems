#include <stdio.h>
#include <stdlib.h>

void fun(int *a)
{
    a = (int *)malloc(sizeof(int));
}

int main()
{
    int *p;
    p = (int *)malloc(sizeof(int));
    //fun(p);
    *p = 6;
    printf("%d\n",*p);
    return(0);
}