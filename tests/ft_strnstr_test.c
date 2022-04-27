#include "../libft.h"

int main(void)
{
    // char *needle = "";
    // char *haystack = "oh no not the empty string !";
    char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char *empty = (char*)"";
    char *f;
    char *f1;

    /* 5 */ f = ft_strnstr(empty, "", -1);
	/* 6 */ f1 = strnstr(empty, "", -1);    

    // /* 5 */ f = ft_strnstr(empty, "", 0);
	// /* 6 */ f1 = strnstr(empty, "", 0);

    f = strnstr(haystack, needle, 0);
    printf("   strnstr: %s\n", f);    

    f1 = ft_strnstr(haystack, needle, 0);
    printf("ft_strnstr: %s\n", f1);

    return (0);
}