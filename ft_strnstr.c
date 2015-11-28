/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:19:57 by apellicc          #+#    #+#             */
/*   Updated: 2015/11/28 14:19:59 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t f;
	size_t k;

	i = 0;
	f = 0;
	if (s2[f] == '\0')
		return ((char *)s1 + i);
	while (s1[i] != '\0')
	{
		k = i; 
		while (s1[k] == s2[f])
		{
			if (f == len && s2[f] == '\0')
				return ((char *)s1 + i);
			k++;
			f++;

		}
		i++;
	}
	return (NULL);
}
