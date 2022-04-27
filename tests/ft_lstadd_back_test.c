#include "../libft/libft.h"

int main(void)
{
	t_list *last_list;
	t_list *begin;
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	t_list *elem4;
	t_list *elem5;

	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;

	str1 = "first";
	str2 = "second";
	str3 = "third";
	str4 = "forth";
	str5 = "fifth";

	begin = NULL;
	elem1 = ft_lstnew(str1);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);
	elem5 = ft_lstnew(str5);

	ft_lstadd_front(&begin, elem1);
	ft_lstadd_front(&begin, elem2);
	ft_lstadd_front(&begin, elem3);
	ft_lstadd_front(&begin, elem4);
	ft_lstadd_back(&begin, elem5);
	
	last_list = ft_lstlast(begin);
	printf("%s\n", last_list->content);

	return (0);
}