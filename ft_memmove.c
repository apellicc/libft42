/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 23:27:26 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/01 23:27:47 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*tmp;

	tmp = ft_memalloc(len);
	tmp = ft_memcpy(tmp, src, len);
	dst = ft_memcpy(dst, tmp, len);
	return (dst);
}
