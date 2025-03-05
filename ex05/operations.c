/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 22:07:30 by dcastor           #+#    #+#             */
/*   Updated: 2025/03/05 22:29:36 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putnbr(int nbr);

void	ft_put_add(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_put_sub(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_put_multiply(int a, int b)
{
	ft_putnbr(a * b);
}

void	ft_put_divide(int a, int b)
{
	if (!b)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(a / b);
}

void	ft_put_modulo(int a, int b)
{
	if (!b)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(a % b);
}
