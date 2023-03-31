#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    char nb;

    if (n >= 10)
        ft_putnbr(n / 10);
    nb = (n % 10) + '0';
    ft_putchar(nb);
}

int main(int argc, char **argv)
{
    int i;
    int cnt;

    i = 1;
    cnt = 0;
    if (argc > 1)
    {
        while (i < argc)
        {
            cnt = cnt + 1;
            i++;
        }
        ft_putnbr(cnt);
    }
    ft_putchar('\n');
    return (cnt);
}