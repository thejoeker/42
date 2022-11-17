#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

#include <stdio.h>

int main()
{
	char s[] = "topicalismo";

	char d[] = "POWER";

	int ptr = ft_strlcat(d, s, 100 * sizeof(char));

	printf("%d", ptr);

	
}

