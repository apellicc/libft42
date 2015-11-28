/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:19:19 by apellicc          #+#    #+#             */
/*   Updated: 2015/11/28 14:19:21 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;
	i = 0;

	while ((unsigned char)s1[i] == (unsigned char)s2[i] && s1[i] != '\0' && s2[i] != '\0' && n)
	{
		n--;
		i++;
	}
	return (s1[i] - s2[i]);
}
