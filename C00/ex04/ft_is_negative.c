/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alferran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:08:12 by alferran          #+#    #+#             */
/*   Updated: 2024/02/15 18:49:05 by alferran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;
	char	b;

	a = 'P';
	b = 'N';
	if (n < 0)
		write(1, &b, 1);
	if (n >= 0)
		write(1, &a, 1);
}
/*
int	main(void)
{
	ft_is_negative(0);
	return (0);
}
*/
