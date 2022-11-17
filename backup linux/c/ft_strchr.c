#include <stddef.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

#include <stdio.h>

int main()
{
	char str[] = "hello$what";
	
	int c = '$';

	char *ptr = ft_strchr(str, c);

	printf("%s", ptr);
}

