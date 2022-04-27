#include "../libft.h"

int main(void)
{
    char str[] = "What we will be looking for xa bb bc";
    char *sym1;
    char *sym2;

    sym1 = strrchr(str, '\0');
    printf("   strrchr: %s\n", sym1);

    sym2 = ft_strrchr(str, '\0');
    printf("\nft_strrchr: %s\n", sym2);

    return (0);
}