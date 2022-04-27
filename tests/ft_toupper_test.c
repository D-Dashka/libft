#include "../libft.h"

int main(void)
{
	int output = 'g';

	printf("ft_upper: %d\n", ft_toupper(output));
	printf("toupper: %d\n", toupper(output));
	
	return 0;
}