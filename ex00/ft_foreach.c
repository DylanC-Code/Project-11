/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:14:21 by dcastor           #+#    #+#             */
/*   Updated: 2025/03/05 19:24:45 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = -1;
	while (++i < length)
		f(tab[i]);
}

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	long	l_nbr;

	l_nbr = nbr;
	if (l_nbr < 0)
	{
		write(1, "-", 1);
		l_nbr = -l_nbr;
	}
	if (l_nbr > 9)
		ft_putnbr(l_nbr / 10);
	ft_putchar(l_nbr % 10 + '0');
}

#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	tab[] = {-21, 2, 43};

	if (argc != 1)
		return (0);
	ft_foreach(tab, 3, &ft_putnbr);
}*/
