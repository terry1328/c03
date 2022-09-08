/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cholee <cholee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:14:38 by cholee            #+#    #+#             */
/*   Updated: 2022/09/01 16:46:17 by cholee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	y;

	x = 0;
	while (dest[x] != '\0')
		x++;
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "SOURCE";
	char	dest[] = "DESTINATION";

	printf("%s\n", ft_strcat(dest, src));
}*/
/*The strcat() function append a copy of the null-terminated
     string s2 to the end of the null-terminated string s1, 
	 then add a terminating `\0'.  The string s1 must have 
	 sufficient space to hold the result.

     The source and destination strings should not overlap, 
	 as the behavior is undefined.*/
