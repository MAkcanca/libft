#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    char    chr;

    i = 0;
    chr = c;
    while (i < n)
    {
        if (((unsigned char *)s)[i] == chr)
            return ((void *)s + i); // void pointer
        i++;
    }
    return (NULL);
}