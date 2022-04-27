#include "../libft.h"

int main(void)
{
	char *s1 = "";
	char *s2 = "";
	char *new;

	new = ft_strjoin(s1, s2);
	printf("%s\n", new);
	free(new);
	return (0);
}