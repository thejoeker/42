/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:00:28 by julrober          #+#    #+#             */
/*   Updated: 2022/11/18 12:46:59 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	l;

	j = 0;
	l = 0;
	while (dst[j] && j < (unsigned int)size)
		j++;
	while (src[l])
		l++;
	if (size == 0)
		return (ft_strlen((char *)src));
	i = 0;
	if (size - j == 0)
		return (j + ft_strlen((char *)src));
	while (src[i] && i < ((unsigned int)size - j - 1))
	{
		dst[i + j] = src[i];
		++i;
	}
	dst[i + j] = '\0';
	return (j + l);
}
// concatene une string dans une destination 
