/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 23:09:36 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/01 23:16:08 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	void			*s2;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	if (s != NULL)
	{
		while (i < n)
		{
			if (str[i] == (unsigned char)c)
			{
				s2 = str + i;
				return (s2);
			}
			i++;
		}
	}
	return (NULL);
}
