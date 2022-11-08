void *ft_memset(char *str, char c, int len)
{
	int i = 0;
	while(i < len)
	{
		*str + i = c;
		i++;
	}
	return(str);
}

#include <stdio.h>

int main()
{
	char str[]= "aaaaaaaaaaaaa";
	printf("%p", ft_memset(str, 'b', 4));
}
