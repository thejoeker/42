#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr_trim;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && strchr(set, *s1) != 0)
		s1++;
	len = strlen(s1);
	while (len && strchr(set, s1[len - 1]) != 0)
		len--;
	ptr_trim = malloc((len + 1) * sizeof(char));
	if (!ptr_trim)
		return (NULL);
	memcpy(ptr_trim, s1, len);
	ptr_trim[len] = '\0';
	return (ptr_trim);
}

#include <stdio.h>

int main()
{
	const char str[] = "topic";
	const char str1[] = "easy";

	char *isou = ft_strtrim(str, str1);
	printf("%s", isou);

	
}

