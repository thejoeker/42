#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	c;
	char	*p_funcarg;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	p_funcarg = malloc(sizeof(char) * (len + 1));
	if (!p_funcarg)
		return (NULL);
	c = 0;
	while (c < len)
	{
		p_funcarg[c] = f(c, s[c]);
		c++;
	}
	p_funcarg[len] = '\0';
	return (p_funcarg);
}


#include <stdio.h>

int main()
{
	char s[] = "topicalismo";
	
	char d =ft_putstr(s,test.c)

	printf("%d", d);

	
}

