#include "../libft/libft.h"

int main(void)
{
	t_list *new;
	int i;
	char *char_content = "abce";
	int int_content[] = {1, 2, 3, 4, 5, 6};

	i = 0;
	new = ft_lstnew(char_content);
	printf("%s\n", (char *)new->content);
	
	new = ft_lstnew(int_content);
	printf("%d\n", (int)new->content);
	// while (i < 6)
	// {
	// 	i--;
	// 	printf("%d\n", (int)new->content);
	// }
	return (0);
}