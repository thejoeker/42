int ft_strlen(const char *s)
{
	int i = 0;
	while(s[i])
	i++;
	return(i);
}

#include <stdio.h>

int main()
{
	char c[]= "toto";
	printf("%d", ft_strlen(c));
}
