#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int             i;
    unsigned char   c;

    i = 128;
    while (i > 0)
    {
        if (octet < i)
        {
            c = '0';
            write(1, &c, 1);
            i /= 2;
        }
        else
        {
            c = '1';
            write(1, &c, 1);
            octet = octet - i;
            i /= 2;
        }
    }
}