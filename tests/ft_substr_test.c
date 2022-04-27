#include "../libft.h"

int main(void)
{
    char *str;
    char *s = "abcde";
    unsigned int start;
    size_t len;

    len = 2;
    start = 10;
    str = ft_substr(s, start, len);
    printf("%s\n", str);
}