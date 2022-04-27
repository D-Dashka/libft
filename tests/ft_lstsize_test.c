#include "../libft/libft.h"

int main(void)
{
	int count;
	t_list	*begin;
	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	t_list	*elem4;

	char *str = "abcdef";

	elem1 = ft_lstnew(str);
	elem2 = ft_lstnew(str);
	elem3 = ft_lstnew(str);
	elem4 = ft_lstnew(str);

	begin  = NULL;
	ft_lstadd_front(&begin, elem1);
	ft_lstadd_front(&begin, elem2);
	ft_lstadd_front(&begin, elem3);
	ft_lstadd_front(&begin, elem4);
	count = 0;

	count = ft_lstsize(begin);
	printf("%d\n", count);

	return (0);
	
}