#include <stdio.h>

void    ft_ultimate_ft(int *********nbr)
{
    *********nbr = 42;
}

int main(void)
{
    int a = 100000000;
    int *p = &a;
    int **p1 = &p;
    int ***p2 = &p1;
    int ****p3 = &p2;
    int *****p4 = &p3;
    int ******p5 = &p4;
    int *******p6 = &p5;
    int ********p7 = &p6;
    int *********p8 = &p7;
    
    printf("%d\n", *********p8);
    printf("%d\n", p2); //address checking
    printf("%d\n", p3); //address checking
    printf("%d\n", p4); //address checking
    printf("%d\n", &p3); //address checking

    printf("%d\n", &a); //address checking 
    printf("%d\n", p);  //address checking 

    ft_ultimate_ft(p8);
    printf("%d\n", *p);
    printf("%d\n", **p1);
}