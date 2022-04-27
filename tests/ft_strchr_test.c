#include "../libft.h"
int main(void)
{
    char str[] = "bonjour";
    char *sym1;
    char *sym2;

    sym1 = strchr(str, '\0');
    printf("   strchr: %s\n", sym1);

    sym2 = strchr(str, '\0');
    printf("ft_strchr: %s\n", sym2);

    return (0);
}