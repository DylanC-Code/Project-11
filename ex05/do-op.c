/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:09:48 by dcastor           #+#    #+#             */
/*   Updated: 2025/03/05 22:33:46 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_put_add(int a, int b);
void	ft_put_sub(int a, int b);
void	ft_put_multiply(int a, int b);
void	ft_put_divide(int a, int b);
void	ft_put_modulo(int a, int b);
int		ft_strlen(char *str);
void	ft_putchar(char c);

int	ft_atoi(char *str)
{
	long	nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	while (*str == '+' || *str == '-')
		if (*str++ == '-')
			sign = -sign;
	while (*str >= '0' && *str <= '9')
	{
		nbr = nbr * 10 + *str - '0';
		str++;
	}
	return (nbr * sign);
}

int	ft_get_index(char c, char *charset)
{
	int	i;

	i = -1;
	while (charset[++i])
		if (c == charset[i])
			return (i);
	return (-1);
}

int	main(int argc, char **argv)
{
	char	operators[] = "+-*/%";
	int		operator_index;

	void (*operations[5])(int a, int b) = {&ft_put_add, &ft_put_sub,
		&ft_put_multiply, &ft_put_divide, &ft_put_modulo};
	if (argc != 4 || ft_strlen(argv[2]) != 1)
	{
		ft_putchar('0');
		return (0);
	}
	operator_index = ft_get_index(*argv[2], operators);
	if (operator_index < 0)
	{
		ft_putchar('0');
		return (0);
	}
	operations[operator_index](ft_atoi(argv[1]), ft_atoi(argv[3]));
}
