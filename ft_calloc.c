# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <wchar.h>

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;
    size_t  i;
    size_t  len;

    i = 0;
    len = count * size;
    ptr = malloc(len);
    if (!ptr)
        return (NULL);
    while (i < len)
    {
        ((char *)ptr)[i] = 0;
        i++;
    }
    return (ptr);
}