#include <unistd.h>

void ft_putchar(char c)
{
    int result;
    result = write(1, (void*) &c, 1);
    (void) result;
}
