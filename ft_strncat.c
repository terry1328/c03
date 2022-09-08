/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cholee <cholee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:50:10 by cholee            #+#    #+#             */
/*   Updated: 2022/09/01 17:15:24 by cholee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		x++;
	while (y < nb && src[y] != '\0')
	{
		dest[x + y] = src[y];
		y++;
	}
	dest[x + y] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	src[] = "SOURCE";
	char	dest[] = "DESTINATION";

	printf("%s\n", ft_strncat(dest, src, 4));
}*/
/*The strncat() functions append a copy of the null-terminated
     string s2 to the end of the null-terminated string s1, then add a 
	 terminating `\0'.  The string s1 must have sufficient space to hold the 
	 result.

     The strncat() function appends not more than n characters from s2, and 
	 then adds a terminating `\0'.

     The source and destination strings should not overlap, as the behavior
	 is undefined.*/
