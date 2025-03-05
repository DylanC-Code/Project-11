/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basics.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:24:27 by dcastor           #+#    #+#             */
/*   Updated: 2025/03/05 22:28:55 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long	l_nbr;

	l_nbr = nbr;
	if (l_nbr < 0)
	{
		ft_putstr("-");
		l_nbr = -l_nbr;
	}
	if (l_nbr > 9)
		ft_putnbr(l_nbr / 10);
	ft_putchar(l_nbr % 10 + '0');
}

int	ft_strlen(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		;
	return (i);
}
