int ft_isascii(int c)
{
	if(c >= 0 && c <= 127)
	return(1);
	return(0);
}

#include <stdio.h>

int main()
{
	char c = 188;
	printf("%d", ft_isascii(c));
}
