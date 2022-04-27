#include "../libft.h"

int main()
{
	char str[] = "0000";
	char *arr;
    char *arr1;

	arr = strdup(str);
	printf("   strdup: %s\n", arr);

	arr1 = ft_strdup(str);
	printf("ft_strdup: %s\n", arr1);

	return 0;
}