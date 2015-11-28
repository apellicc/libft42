/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:19:04 by apellicc          #+#    #+#             */
/*   Updated: 2015/11/28 14:19:05 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*s1;

	i = 0;
	if (s != NULL && f != NULL)
	{
		s1 = ft_strdup(s);
		if (!s1)
			return (NULL);
		while (s[i])
		{
			s1[i] = (*f)(i, s[i]);
			i++;
		}
		return (s1);
	}
	return (NULL);
}
