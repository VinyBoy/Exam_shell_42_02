#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int pgcd(int a, int b)
{
    int plus_petit;

    if (a < b)
        plus_petit = a;
    if (a > b)
        plus_petit = b;
    if (a == b)
        plus_petit = a;
    while (plus_petit > 1)
    {
        // si a % == 0 c'est qu'il n'y a pas de reste de la division
        if (a % plus_petit == 0 && b % plus_petit == 0)
            return (plus_petit);
        plus_petit--;
    }
    return (1);
}
int main(int argc, char ** argv)
{
    int a;
    int b;
    int res;

    if (argc == 3)
    {
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        res = pgcd(a, b);
        printf("%d\n", res);
        return (0);
    }
    ft_putchar('\n');
    return (0);
}