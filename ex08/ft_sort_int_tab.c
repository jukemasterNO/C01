#include <stdio.h>

void    ft_sort_int_tab(int *tab, int size)
{
    int i = 0;
    int scanner;
    int temp;

    while(i < size)
    {   scanner = i + 1;
        while(scanner < size)
        {
            if (tab[i] > tab[scanner])
            {
                temp = tab[i];
                tab[i] = tab[scanner];
                tab[scanner] = temp;
            }
        scanner++;
        }
    i++;
    }
}

int main(void)
{
    int	array[] = {3, 4, 5, 1, 2, 8, 7, 9, 6, 0,};
	int	size = 10;
	int	i;

    ft_sort_int_tab(&array[0], size);
                                                                //0 to 9 (size = 10)
    i = 0;
    while(i < size)
    {
        printf("%d ", array[i]);
        i++;
    }
    printf("\n");
                                                                            //size = 20 (random digit from 0 to 9)
    int array2[] = {1,5,7,4,3,7,8,9,4,0,7,3,4,5,6,7,8,9,2,4,};
    int size2 = 20;
    int i2;

    ft_sort_int_tab(&array2[0], size2);
    
    i2 = 0;
    while(i2 < size2)
    {
        printf("%d ", array2[i2]);
        i2++;
    }
}