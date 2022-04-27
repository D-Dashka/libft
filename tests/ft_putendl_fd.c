#include "../libft.h"

int main(void)
{
	int fd;
	char *str = "this text is to in the file now!";

	fd = open("test.txt", O_WRONLY);
	ft_putendl_fd(str, fd);
	return (0);
}