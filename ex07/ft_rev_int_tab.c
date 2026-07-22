#include <stdio.h>

void    ft_rev_int_tab(int *tab, int size)
{
    int i;
    int temp;

    i = 0;
    while(i < size / 2)
    {
        temp = tab[i];
        tab[i] = tab[size - 1 -i];
        tab[size - 1 -i] = temp;
        i++;
    }
}

int main(void)
{
    int array[] = {10,20,30,40,50,60,70,80,100,110};
    int size = 10;
    int i = 0;

    ft_rev_int_tab(&array[0], size);

    while(i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
}