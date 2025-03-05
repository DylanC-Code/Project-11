/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:32:17 by dcastor           #+#    #+#             */
/*   Updated: 2025/03/05 19:42:23 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char *))
{
	while (*tab)
		if (f(*tab++))
			return (1);
	return (0);
}

/*int	ft_greater_than_five(char *str)
{
	int	count;

	count = 0;
	printf("'%s'\n", str);
	while (*str++)
		if (++count == 5)
			return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	// int	tab[] = {-21, 2, 43};
	if (argc <= 1)
		return (0);
	printf("ANY %d \n", ft_any(++argv, &ft_greater_than_five));
}*/
