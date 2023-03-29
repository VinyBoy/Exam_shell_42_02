#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] >= 65 && argv[1][i] <= 77)
            {
                argv[1][i] = argv[1][i] + 13; 
            }
            else if (argv[1][i] >= 97 && argv[1][i] <= 109)
            {
                argv[1][i] = argv[1][i] + 13; 
            }
            else if(argv[1][i] >= 78 && argv[1][i] <= 90)
            {
                argv[1][i] = argv[1][i] - 13; 
            }
            else if (argv[1][i] >= 110 && argv[1][i] <= 122)
            {
                argv[1][i] = argv[1][i] - 13; 
            }
            ft_putchar(argv[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}