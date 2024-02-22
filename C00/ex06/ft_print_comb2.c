/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alferran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 13:07:00 by alferran          #+#    #+#             */
/*   Updated: 2024/02/21 20:04:13 by alferran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putdigit(int i)
{
	ft_putchar(i + 48);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putdigit(a / 10);
			ft_putdigit(a % 10);
			ft_putchar(' ');
			ft_putdigit(b / 10);
			ft_putdigit(b % 10);
			if (a != 98)
			{
				write(1, ", ", 2);
			}
			b++;
		}
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
