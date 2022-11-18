/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 08:02:04 by julrober          #+#    #+#             */
/*   Updated: 2022/11/18 12:53:37 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	us1;
	unsigned char	us2;

	while (n-- > 0)
	{
		us1 = *(unsigned char *)s1++;
		us2 = *(unsigned char *)s2++;
		if (us1 != us2)
			return (us1 - us2);
		if (us1 == '\0')
			return (0);
	}
	return (0);
}
// compare 2 string sur n charactere, si egal = 0
// si, s1 > s2 = positif et s1 < s2 = negatif 
