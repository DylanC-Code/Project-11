/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 08:17:37 by dcastor           #+#    #+#             */
/*   Updated: 2025/03/07 08:29:03 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int		i;
	int		j;
	char	*tmp;

	i = -1;
	while (tab[++i])
	{
		j = i;
		while (j > 0)
		{
			if (cmp(tab[j - 1], tab[j]) > 0)
				break ;
			tmp = tab[j];
			tab[j] = tab[j - 1];
			tab[j - 1] = tmp;
			j--;
		}
	}
}

/*j#include <string.h>

int	main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	// printf("%d\n", ft_strcmp(argv[1], argv[2]));
	ft_advanced_sort_string_tab(argv, &strcmp);
	while (argc > 0)
		printf("'%s'\n", argv[--argc]);
}*/
