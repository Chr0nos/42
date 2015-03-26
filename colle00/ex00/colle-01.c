#include "ft_putchar.h"

void colle_header(int line_num, int *lenght, int *i)
{
    if (!line_num)
    {
        ft_putchar('/');
        *lenght -= 2;
        (*i)++;
    }
    else if (line_num < 0)
    {
        ft_putchar('\\');
        *lenght -= 2;
        (*i)++;
    }
    else (*lenght)--;
}
void colle_footer(int line_num, int *lenght, int *i)
{
    if ((!line_num) && (*i <= *lenght)) ft_putchar('\\');
    else if ((line_num < 0) && (*i <= *lenght)) ft_putchar('/');
}

void colle_line(int line_num, int lenght)
{
    int i;

    i = 0;
    colle_header(line_num, &lenght, &i);
    while (i <= lenght)
    {
        if (((i == 0) || (i == lenght)) && (line_num)) ft_putchar('*');
        else if (line_num > 0) ft_putchar(32);
        else ft_putchar('*');
        i++;
    }
    i--;
    colle_footer(line_num, &lenght, &i);
    ft_putchar('\n');
}

void colle(int x, int y)
{
    /*
    ** in case of the header: line = 0
    ** in case of the footer: line = -1
    ** in all other cases: line = current line number
    */
    int line;

    line = 0;
    while (line < y)
    {
        colle_line(line, x);
        line++;
    }
    if ((line == y) && (y > 1)) colle_line(-1, x);
}
