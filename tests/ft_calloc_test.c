#include "../libft.h"

int main(void)
{
    int *p;
    int count;
    int i;
    
    count = 0;
    p = ft_calloc(count, 0);
    i = 0;
    if (!p)
        printf("none\n");
    else
    {
        while (i <= count)
        {
            p[i] = i;
            printf("%d", p[i]);
            i++;
        }
    }
    return (0);
}