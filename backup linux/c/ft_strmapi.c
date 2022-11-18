/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:26:37 by julrober          #+#    #+#             */
/*   Updated: 2022/11/17 17:26:39 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
