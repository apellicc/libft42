/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 23:27:26 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/16 13:40:59 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{	
	char	a;
	void	*b;

	if (len)
	{
		a = *(char *)src;
		b = ft_memmove(dst + 1, src + 1, len - 1);
		*(char *)dst = a;
	}
	b = dst;
	return (b);
}
