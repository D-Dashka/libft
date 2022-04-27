#include "../libft.h"

int main(void)
{
    char str[] = "bonjour";
    //int tab[7] = {-49, 49, 1, -1, 0, -2, 2};
    char *f;
    char *f1;

    f = memchr(str, 'o', 7);
    printf("   memchr: %s\n", f);

    f1 = memchr(str, 'o', 7);
    printf("ft_memchr: %s\n", f1);

    return (0);
}