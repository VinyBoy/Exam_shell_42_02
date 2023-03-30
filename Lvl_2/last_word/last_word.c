#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == ' ' && argv[1][i + 1] >= 33 && argv[1][i + 1] <= 126)
                j = i + 1;
           i++;
        }
        while (argv[1][j] >= 33 && argv[1][j] <= 127)
        {
            ft_putchar(argv[1][j]);
            j++;
        }
    }
    ft_putchar('\n');
}