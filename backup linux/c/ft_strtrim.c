/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:27:01 by julrober          #+#    #+#             */
/*   Updated: 2022/11/17 17:27:05 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr_trim;
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strchr(set, s1[len - 1]) != 0)
		len--;
	ptr_trim = malloc((len + 1) * sizeof(char));
	if (!ptr_trim)
		return (NULL);
	ft_memcpy(ptr_trim, s1, len);
	ptr_trim[len] = '\0';
	return (ptr_trim);
}
/*
#include <stdio.h>

int main()
{
	const char str[] = "topic";
	const char str1[] = "easy";

	char *isou = ft_strtrim(str, str1);
	printf("%s", isou);
}*/
