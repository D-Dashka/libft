#include "../libft.h"

int main(void)
{
    //char dest[] = "abcdef";
    int arr[] = {1, 2, 3, 4, 5, 6};
    // char *b;
    // b = ft_memset(arr, '*', 4);
    // printf("ft_memset: %s\n", b);

    char *c;
    c = memset(arr, '*', 3);
    printf("memset: %s\n", c);

    return 0;
}