#include <stddef.h>
#include <string.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr_pt;

	if (!s)
		return (NULL);
	if (strlen(s) < start)
		return (strdup(""));
	substr_pt = malloc((len + 1) * sizeof(char));
	if (!substr_pt)
		return (NULL);
	memcpy(substr_pt, start + s, len);
	substr_pt[len] = '\0';
	return (substr_pt);
}

#include <stdio.h>

int main()
{
	const char  *str;
	int s = 66;
	char *ptr = ft_substr(str, s, 10); 
	printf("%s", ptr);
}

