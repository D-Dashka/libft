#include "../libft.h"

int main(void)
{
    char s1[] = "atoms\0\0\0\0";
    char s2[] = "atoms\0abccd";
    int result1;
	int result2;

    result1 = strncmp(s1, s2, 7);
    printf("   strncmp: %d\n", result1);

    result2 = ft_strncmp(s1, s2, 7);
    printf("ft_strncmp: %d\n", result2);

    return (0);
}