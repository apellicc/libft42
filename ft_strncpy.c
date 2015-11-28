/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:19:28 by apellicc          #+#    #+#             */
/*   Updated: 2015/11/28 14:19:30 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	int	i;

	i = 0;
	while (len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	while (len)
	{
		dst[i] = '\0';
		i++;
		len--;
	}
	return (dst);
}
