/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cholee <cholee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:38:27 by cholee            #+#    #+#             */
/*   Updated: 2022/09/01 14:50:49 by cholee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0')
	{
		x++;
	}
	return (s1[x] - s2[x]);
}
/*
int	main(void)
{
	printf("%d\n", ft_strcmp("Hello", "hello"));
	printf("%d\n", ft_strcmp("Sunway", "sunway"));
	printf("%d\n", ft_strcmp("str123", "stR123"));
	printf("%d\n", ft_strcmp("aaaaaa", "aa"));
}*/
/*It will only compare the first different charactor of str1 and str2,
 The result printed show the different count of the different character in 
 decimal format*/
