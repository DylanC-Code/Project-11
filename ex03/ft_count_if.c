/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 20:49:32 by dcastor           #+#    #+#             */
/*   Updated: 2025/03/05 20:52:09 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	count;
	int	i;

	count = 0;
	i = -1;
	while (++i < length)
		if (f(tab[i]))
			count++;
	return (count);
}
