/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:06:31 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/02 17:39:59 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	char			*s;
	unsigned int	t;
	int				i;

	if (n == -2147483648)
	{
		s = "-2147483648";
		return (s);
	}
	i = 0;
	t = n;
	if (n < 0)
	{
		t = -n;
		i++;
	}
	i = ft_intlen(t) + i;
	s = ft_intcpy(n, t, i);
	if (!s)
		return (NULL);
	return (s);
}
