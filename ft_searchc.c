/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_searchc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <apellicc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 16:14:08 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/02 16:14:18 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_searchc(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c || s[i] == '\0')
		i++;
	return (i);
}