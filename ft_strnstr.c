#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t  little_len;

    i = 0;
    little_len = ft_strlen(little);
    if (little_len == 0)
        return ((char *)big);
    
    while (big[i] && i < len)
    {
        if (len - i < little_len)
            return (NULL);
        if (ft_strncmp(big + i, little, little_len) == 0)
            return ((char *)big + i);
        i++;
    }
    return (NULL);

}