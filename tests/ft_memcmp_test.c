#include "../libft.h"

int main(void)
{
    // char s1[] = "abcdr";
    // char s2[] = "abcdr";
    //int s1[] = {7, 2, 4, 5, 6};
    //int s2[] = {-1, 8, 9};
    int result1;
    int result2;

    result1 = memcmp("abcdefghij", "abcdefgxyz", 7);
    printf("   memcmp: %d\n", result1);
    
    result2 = ft_memcmp("abcdefghij", "abcdefgxyz", 7);
    printf("ft_memcmp: %d\n", result2);

    return (0);
}