
// strchr
// Finds the first occurrence of the character c in the string s.
// The terminating null character is considered to be part of the string.
// If c is not found, the function returns a null pointer.
// The strchr() function returns a pointer to the located character, or a null pointer if the character is not found.
# include <stdlib.h>
# include <string.h>

char *ft_strchr(const char *s, int c)
{
    char ch;

    ch = (char)c;
    while (*s)
    {
        if (*s == ch)
            return ((char *)s);
        s++;
    }
    if (*s == ch)
        return ((char *)s);
    return (NULL);
}