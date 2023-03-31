
int max(int *tab, unsigned int len)
{
    int i;
    int temp;
    int ret;

    i = 0;
    ret = i;
    if (len == 0)
        return (0);
    while (i <= len)
    {
        temp = tab[i];
        if (temp > ret)
            ret = temp;
        i++;
    }
    return (ret);
}
