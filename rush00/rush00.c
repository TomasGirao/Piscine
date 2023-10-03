/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 12:41:15 by tomarque          #+#    #+#             */
/*   Updated: 2023/07/30 18:58:14 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	a;
	int	b;

	b = 1;
	while (b <= y && x > 0)
	{
		a = 1;
		while (a <= x)
		{
			if ((a != 1 && a != x) && (b == 1 || b == y))
				ft_putchar('-');
			else if ((b != 1 && b != y) && (a == 1 || a == x))
				ft_putchar('|');
			else if ((a == 1) || (a == x) || (b == 1) || (b == y))
				ft_putchar('o');
			else
				ft_putchar(' ');
			a++;
		}
		ft_putchar('\n');
		b++;
	}
}
