/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cholee <cholee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:29:48 by cholee            #+#    #+#             */
/*   Updated: 2022/09/01 15:45:51 by cholee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while ((s1[x] != '\0' || s2[x] != '\0') && x < n)
	{
		if (s1[x] > s2[x])
			return (1);
		else if (s1[x] < s2[x])
			return (-1);
		x++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_strncmp("Helloworld", "HelloWorld", 8));
	printf("%d\n", ft_strncmp("Helloworld", "HelloWorld", 4));
	printf("%d\n", ft_strncmp("Hello1", "Hello8", 7));
	printf("%d\n", ft_strncmp("Hello8", "Hello1", 7));
}*/
/* If the first different characters of "S1" is greater than "S2", print (1)
If the first different characters of "S2" is greater than "S1", print (-1)
If the "S1" is equal to "S2", print (0). The compared characters must within
the "unsigned int n" in the function of "strncmp"!*/
