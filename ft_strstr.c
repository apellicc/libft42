/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:20:31 by apellicc          #+#    #+#             */
/*   Updated: 2015/11/28 14:20:34 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int f;
	int k;

	i = 0;
	f = 0;
	if (s2[f] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		k = i; 
		while (s1[k] == s2[f])
		{
			k++;
			f++;
			if (s2[f] == '\0')
				return ((char *)s1 + i);		
		}
		i++;
	}
	return (NULL);
}
