int ft_isalnum(int c)
{
	if( c >= '0' && c <= '9' || c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return(1);
		return(0);
}

#include <stdio.h>

int main()

{
	char c = '0';
	printf("%d", ft_isalnum(c));
	c = 'B';
	printf("%d", ft_isalnum(c));
	c = 'a';
	printf("%d", ft_isalnum(c));
	c = '+';
	printf("%d", ft_isalnum(c));
}
