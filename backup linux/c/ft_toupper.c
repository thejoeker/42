/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:48:54 by julrober          #+#    #+#             */
/*   Updated: 2022/11/09 08:29:32 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c -32);
	return (c);
}
/*
#include <stdio.h>

int main ()
{
	char c = 'a';
	printf("%d\n", ft_toupper(c));
	c = 'A';
	printf("%d\n", ft_toupper(c));
	c = '0';
	printf("%d", ft_toupper(c));
}*/
