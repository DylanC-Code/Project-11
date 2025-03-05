/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 19:26:19 by dcastor           #+#    #+#             */
/*   Updated: 2025/03/05 19:29:44 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new_tab;
	int	i;

	new_tab = malloc(sizeof(int) * (length + 1));
	if (!new_tab)
		return (NULL);
	i = -1;
	while (++i < length)
		new_tab[i] = f(tab[i]);
	new_tab[length] = NULL;
	return (new_tab)
}
