/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: julrober <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 09:49:36 by julrober          #+#    #+#             */
/*   Updated: 2022/11/17 15:58:45 by julrober         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)

{
	int	i;

	i = 0;
	while (s[i])
	i++;
	return (i);
}
/*
#include <stdio.h>

int main()
{
	char c[]= "toto";
	printf("%d", ft_strlen(c));
}*/
