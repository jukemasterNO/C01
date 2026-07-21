#include <unistd.h>

void    ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(void)
{
    ft_putstr("Hello, World");
    write(1, "\n", 1);  //newline 
    ft_putstr("WASSAP");//put it directly (same as Broooo)
    write(1, "\n", 1);  //newline

    char a[] = "Broooo";    
    ft_putstr(&a[0]); //create char variable first (same as WASSAP)
}