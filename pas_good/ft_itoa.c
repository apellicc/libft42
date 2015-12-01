/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 22:13:56 by apellicc          #+#    #+#             */
/*   Updated: 2015/12/01 22:17:52 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int		i;
	
	i = 0;
	while (n > 10)
 	{
 		n = n / 10;
 		i++;
 	}
 	return (i);
}
static char	*ft_intstr(int n, int t, int i)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (i + 1));
	while (i >= 0)
 	{
 		s[i] = (t % 10) + '0';
 		t = t / 10;
 		i--;
 	}
 	if (n < 0)
 		s[0] = '-';
 	return (s);
}
char				*ft_itoa(int n)
{
	char			*s;
	unsigned int	t;
	int 			i;

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
 	s = ft_intstr(n, t, i);
 	return s;
}
