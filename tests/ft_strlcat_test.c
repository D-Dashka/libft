#include "../libft.h"

//size_t strlcat(char * restrict dst, const char * restrict src, size_t dstsize);

void test(size_t size)
{
    char src[] = "1234";
    char dest[100] = "abcdef";
    unsigned long int r;
    r = strlcat(dest, src, size);

    printf("strlcat: Copied '%s' into '%s', length %lu\n",
            src,
            dest,
            r
          );
}
void test2(size_t size)
{
    char src[] = "1234";
    char dest[100] = "abcdef";
    unsigned long int s;

    s = ft_strlcat(dest, src, size);
    printf("ft_strlcpy: Copied '%s' into '%s', length %lu\n",
            src,
            dest,
            s
          );
    printf("\n");
}

int main()
{
    //test(20);
    //test2(20);
    // test(12);
    // test2(12);
     test(5);
     test2(5);
    // test(1);
    // test2(1);
    // test(0);
    // test2(0);

    return(0);
}