#include "../libft.h"

void test(int size)
{
    char string[] = "abcdef";
    char buffer[7];
    int r;

    r = strlcpy(buffer, string, size);

    printf("strlcpy: Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}
void test2(int size)
{
    char string[] = "abcdef";
    char buffer[7];
    int s;

    s = ft_strlcpy(buffer, string, size);
    printf("ft_strlcpy: Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            s
          );
    printf("\n");
}

int main()
{
    test(20);
    //test2(20);
    test(6);
    test2(6);
    test(2);
    test2(2);
    test(1);
    test2(1);
    test(0);
    test2(0);

    return(0);
}