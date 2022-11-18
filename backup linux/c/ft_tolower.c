/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:14:55 by julrober          #+#    #+#             */
/*   Updated: 2022/11/17 17:51:54 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c +32);
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
