#include "../libft.h"

int main(void)
{
	char str[] = "99999999999999999999999999";
	int res;
    int res1;

    res = atoi(str);
    printf("atoi: %d\n", res);

    res1 = ft_atoi(str);
	printf("ft_atoi: %d\n", res1);

	return (0);
}