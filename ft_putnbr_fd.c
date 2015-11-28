/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apellicc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:16:22 by apellicc          #+#    #+#             */
/*   Updated: 2015/11/28 14:16:24 by apellicc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int c, int fd)
{
	if(c < 0)
	{
		ft_putchar_fd('-', fd);
		c = -c;
	}
	if(c > 9)
	{
		ft_putnbr_fd(c / 10, fd);
		ft_putnbr_fd(c % 10, fd);
	}
	if(c < 10)
		ft_putchar_fd(c + '0', fd);
}
