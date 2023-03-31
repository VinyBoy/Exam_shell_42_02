#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        ft_putchar(str[i]);
        i++;
    }
}

void    ft_putnbr(int n)
{
    unsigned int nb;
    char c;

    if (n < 0)
    {
        n = n * -1;
        ft_putchar('-');
    }
    nb = n;
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        c = (char)nb + 48;
        ft_putchar(c);
    }
}

int main()
{
    int i;

    i = 1;
    while (i <= 100)
    {
        if (i % 5 == 0 && i % 3 == 0)
            ft_putstr("fizzbuzz");
        else if (i % 3 == 0)
            ft_putstr("fizz");
        else if (i % 5 == 0)
            ft_putstr("buzz");
        else
            ft_putnbr(i);
        ft_putchar('\n');
        i++;
    }
}