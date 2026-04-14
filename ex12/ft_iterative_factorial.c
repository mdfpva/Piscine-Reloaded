/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mide-fre <mide-fre@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:56:06 by mide-fre          #+#    #+#             */
/*   Updated: 2026/04/13 16:18:03 by mide-fre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	if (nb < 0 || nb > 16)
		return (0);
	else if (nb == 0)
		return (1);
	num = 1;
	while (nb > 0)
	{
		num *= nb;
		nb--;
	}
	return (num);
}
