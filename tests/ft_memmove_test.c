#include "../libft.h"

int main(void)
{
	char src[] = "Hello my name is mrhyhorn";
	char dest[20];

	printf("%lu\n", sizeof(src));
	printf("%lu\n", sizeof(dest));

	// printf("Before: %s\n", src);
	// memmove(&src[10], src, 10);
	// printf("memmove: %s\n", src);
	// ft_memmove(&src[10], src, 20);
	// printf("ft_memmove: %s\n", src);

	ft_memmove(dest, &src[6], 20);
	memmove(dest, &src[6], 20);
	printf("%s\n", dest);
	
	//int arr[] = {1, 2, 3, 4, 7, 8};

	return (0);
}