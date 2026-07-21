#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }   
    return (i);
}

int main()
{
    int count;
    int count1;
    char a[] = "Hello";//5 characters
    char b[] = "Wassappppppppppppppppppppppppp";//30 characters


    count = ft_strlen(&a[0]);
    count1 = ft_strlen(&b[0]);
    printf("%d\n", count);
    printf("%d\n", count1);
}