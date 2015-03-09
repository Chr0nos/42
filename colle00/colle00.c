#include "ft_putchar.h"

void colle_line(int line_num, int lenght)
{
    int i;

    i = 0;
    if (!line_num)
    {
        ft_putchar('o');
        lenght -= 2;
        i++;
    }
    else lenght--;
    while (i <= lenght)
    {
        if (((i == 0) || (i == lenght)) && (line_num)) ft_putchar('|');
        else if (line_num) ft_putchar(32);
        else ft_putchar('-');
        i++;
    }
    i--;
    if ((!line_num) && (i <= lenght)) ft_putchar('o');
    ft_putchar('\n');
}

void colle(int x, int y)
{
    int line;

    line = 0;
    while (y--)
    {
        if (!y) line = 0;
        colle_line(line, x);
        line++;
    }
}
