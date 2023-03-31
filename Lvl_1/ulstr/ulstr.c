#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_reverse_alpha(char c)
{
    if (c >= 65 && c <= 90)
        c = c + 32;
    else if (c >= 97 && c <= 122)
        c = c - 32;
    ft_putchar(c);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            (ft_reverse_alpha(argv[1][i]));
            i++;
        }
    }
    ft_putchar('\n');
}