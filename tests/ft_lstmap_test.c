#include "../libft/libft.h"


static void	*ft_lstnew_mine(void *content)
{
	char *check;
	check = (char *)content;

	return (check);
}

static void	ft_clear_content(void *new)
{
	free(new);
}

int main(void)
{
	t_list *current;
	t_list *begin;
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	t_list *elem4;
	t_list *elem5;
	t_list *elem6;

	char *str1;
	char *str2;
	char *str3;
	char *str4;
	char *str5;
	char *str6;

	str1 = "first";
	str2 = "second";
	str3 = "third";
	str4 = "forth";
	str5 = "fifth";
	str6 = "check";

	begin = NULL;
	elem1 = ft_lstnew(str1);
	elem2 = ft_lstnew(str2);
	elem3 = ft_lstnew(str3);
	elem4 = ft_lstnew(str4);
	elem5 = ft_lstnew(str5);
	elem6 = ft_lstnew(str6);

	ft_lstadd_front(&begin, elem1);
	ft_lstadd_front(&begin, elem2);
	ft_lstadd_front(&begin, elem3);
	ft_lstadd_front(&begin, elem4);
	ft_lstadd_front(&begin, elem5);
	ft_lstadd_front(&begin, elem6);
	
	current = ft_lstmap(begin, &ft_lstnew_mine, &ft_clear_content);
	printf("%s\n", current->content);

	return (0);
}