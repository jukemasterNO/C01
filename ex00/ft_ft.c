#include <stdio.h>

void    ft_ft(int *nbr)
{
    *nbr = 42;
}

int main(void)
{
    int a = 1000000000;
    int *p = &a;

    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d\n", &a);//address check
    printf("%d\n", p);//address check
    
    ft_ft(p);
    printf("%d\n", *p);
    printf("%d\n", a);
}