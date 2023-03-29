#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

char    ft_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int ft_snake_case_verif(char *str)
{
    int i;
    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] < 97 && str[i] > 122 || str[i] != 95)
            return (0);
        i++;
    }
    return (1);
}

void   ft_uppercase(char *c)
{
    if (*c >= 97 && *c <= 122)
        *c -= 32;
}

void    ft_print_str(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (str[i] == '_')
            ft_uppercase(&str[i + 1]);
        if (str[i] != '_')
            ft_putchar(str[i]);
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        if (ft_snake_case_verif == 0)
        {
            ft_putstr("Chaine non valide");
            return (0);
        }
        ft_print_str(argv[1]);
    }
    ft_putchar('\n');
    return (0);
}
