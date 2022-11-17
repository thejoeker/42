#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}

#include <stdio.h>

int main()
{
	char c = '1'
	void (v)(unsigned int, char *);

	char str[];
	str = ft_striteri(c, v);
	printf("%s", str);
	
}

