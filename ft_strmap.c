/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:18:57 by apellicc          #+#    #+#             */
/*   Updated: 2015/11/28 14:18:59 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *s1;

	i = 0;
	s1 = ft_strdup(s);
	if (!s1)
		return(NULL);
	if (s != NULL && f != NULL)
	{
		while(s[i])
		{
			s1[i] = (*f)(s[i]);
			i++;
		}
	}
	return(s1);
}
