/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-fre <mide-fre@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:57:20 by mide-fre          #+#    #+#             */
/*   Updated: 2026/04/13 15:54:28 by mide-fre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
			{
				ft_putchar(av[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
