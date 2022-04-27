#include "../libft.h"

int  main(void)
{
    int n = -2147483648;
    int fd;

    fd = open("test.txt", O_WRONLY);
    ft_putnbr_fd(n, fd);
	//printf("%s\n",  ft_putnbr_fd(n, fd));
}