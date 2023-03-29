
#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *str)
{
    size_t i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

size_t  ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (reject[k] != '\0')
		{
			if (reject[k] == s[i])
				return (i);
			k++;
		}
		k = 0;
		i++;
	}
	return (i);
}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        printf("nb de caractere de s1 non present dans s2 : %ld\n", ft_strcspn(argv[1], argv[2]));
    }
    return (0);
}



int main(int argc, char **argv)
{
    if (argc == 3)
    {
        printf("nb de caractere de s1 non present dans s2 : %ld\n", ft_strcspn(argv[1], argv[2]));
    }
    return (0);
}
