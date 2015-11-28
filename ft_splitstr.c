/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:16:52 by apellicc          #+#    #+#             */
/*   Updated: 2015/11/28 14:16:54 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_tabstrlen(const char *s, char c, size_t i)
{
	while(s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static int	ft_nbword(const char *s, char c)
{
	int i;
	int a;
	a = 0;
	i = 0;

	while (s[i] != '\0')
	{
		//if (a == 0 && s[a] != c)
		//	a++;

		if(s[i] == c && s[i + 1] !=c)//&& s[i + 1] != '\0')
			a++;	
		i++;
	}
	return(a);
}

char	**ft_splitstr(char const *s, char c)
{
	int a;
	int b;
	int i;
	char **str;
	char *s1;
	a = 0;
	i = 0;
	s1 = ft_strtrim_c(s, c);
	str = malloc (sizeof (char *) * (ft_nbword(s1, c) + 1));
	printf("nombre de tableau : %d\n", ft_nbword(s1, c));
	while (s1[i] != '\0')
	{
	    while(s1[i] == c)
			i++;
		
		if (s1[i] != c)
		{
			b = ft_tabstrlen(s1, c, i) - i;
			str[a] = (char *)malloc(sizeof(char) * (c + 1));
			str[a] = ft_strncpy(str[a], (s1 + i), b);
			i = i + b;
			a++;
		}
		str[a] = NULL;
	}
	return (str);
}
