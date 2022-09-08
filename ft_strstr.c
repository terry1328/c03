/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cholee <cholee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:17:35 by cholee            #+#    #+#             */
/*   Updated: 2022/09/01 18:09:33 by cholee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			x = 0;
			y = 0;
			while (to_find[x] != '\0')
			{
				if (str[x] != to_find[x])
					y =1;
				x++;
			}
			if (y == 0)
				return (str);
		}
		str++;
	}
	return (0);
}

int	main(void)
{
	char s1[] = "Hello world 42";
	char s2[] = "world";

	printf("%s\n", ft_strstr(s1, s2));
}
/*The strstr() function locates the first occurrence of the null-terminated
     string needle in the null-terminated string haystack.

     The strcasestr() function is similar to strstr(), but ignores the case of
     both strings.

     The strnstr() function locates the first occurrence of the null-terminated
     string needle in the string haystack, where not more than len characters
	 are searched.  Characters that appear after a `\0' character are not searched.
     Since the strnstr() function is a FreeBSD specific API, it should only be
     used when portability is not a concern.

     While the strcasestr() function uses the current locale, the strcasestr_l()
     function may be passed a locale directly. See xlocale(3) for more informa-
     tion.*/
