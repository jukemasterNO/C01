#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b= temp;
}

int main(void)
{
    int a = 2;
    int b = 4;

    printf("%d", a);//before include function
    printf("%d\n", b);//before include function

    ft_swap(&a ,&b);
    printf("%d", a);
    printf("%d", b);
}