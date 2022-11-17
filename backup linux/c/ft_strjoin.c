#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*pt_str;
	size_t	len1;
	size_t	len2;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	len1 = strlen(s1);
	len2 = strlen(s2);
	total_len = len1 + len2;
	pt_str = malloc((total_len + 1) + sizeof(char));
	if (!pt_str)
		return (NULL);
	memcpy(pt_str, s1, len1);
	memcpy(pt_str + len1, s2, len2);
	pt_str[total_len] = '\0';
	return (pt_str);
}

#include <stdio.h>

int main()
{
	const char str[] = "topic";
	const char str1[] = "easy";

	char *isou = ft_strjoin(str, str1);
	printf("%s", isou);

	
}

