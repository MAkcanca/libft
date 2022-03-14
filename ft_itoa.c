#include "libft.h"

char    *ft_itoa(int n)
{
    char *str;
    int sign;
    int len;
    int nb;

    sign = 0;
    len = 0;
    nb = n;
    if (n == -2147483648)
        return (ft_strdup("-2147483648"));
    if (n == 2147483647)
        return (ft_strdup("2147483647"));
    if (n < 0)
    {
        sign = 1;
        nb = -n;
    }
    while (nb / 10)
    {
        nb /= 10;
        len++;
    }
    str = (char *)malloc(sizeof(char) * (len + 2));
    if (!str)
        return (NULL);
    str[len + 1] = '\0';
    while (len >= 0)
    {
        str[len] = (n % 10) + '0';
        n /= 10;
        len--;
    }
    if (sign)
        str[0] = '-';
    return (str);
}