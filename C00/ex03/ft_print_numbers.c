/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alferran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 12:58:20 by alferran          #+#    #+#             */
/*   Updated: 2024/02/15 18:53:45 by alferran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char		nb;

	nb = '0';
	while (nb <= '9')
	{
		write(1, &nb, 1);
		nb++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}
*/
