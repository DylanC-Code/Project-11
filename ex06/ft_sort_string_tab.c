/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcastor <dcastor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 20:13:56 by dcastor           #+#    #+#             */
/*   Updated: 2025/03/06 20:34:40 by dcastor          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = -1;
	while (str1[++i] || str2[i])
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
	return (0);
}

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[j - 1], tab[j]) > 0)
				break ;
			tmp = tab[j];
			tab[j] = tab[j - 1];
			tab[j - 1] = tmp;
			j--;
		}
	}
}

/*int	main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	// printf("%d\n", ft_strcmp(argv[1], argv[2]));
	ft_sort_string_tab(argv);
	while (argc > 0)
		printf("'%s'\n", argv[--argc]);
}*/
