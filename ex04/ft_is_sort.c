/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:52:13 by dcastor           #+#    #+#             */
/*   Updated: 2025/03/05 21:04:58 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int));

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = -1;
	while (++i < length)
	{
		if (i == 0)
			continue ;
		if (f(tab[i - 1], tab[i]) > 0)
			return (0);
	}
	return (1);
}

/*int	ft_diff(int a, int b)
{
	return (a - b);
}

int	main(int argc, char **argv)
{
	int	tab[] = {};

	// int	tab[] = {12, 5};
	printf("SORT %d\n", ft_is_sort(tab, 0, &ft_diff));
}*/
