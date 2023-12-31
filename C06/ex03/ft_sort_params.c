/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomarque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:32:23 by tomarque          #+#    #+#             */
/*   Updated: 2023/08/07 23:37:18 by tomarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int argc, char **argv)
{
	int		a;
	int		b;

	b = 1;
	while (b < argc - 1)
	{
		a = 1;
		while (a < argc - 1)
		{
			if (ft_strcmp(argv[a], argv[a + 1]) > 0)
			{
				ft_swap(&argv[a], &argv[a + 1]);
			}
			a++;
		}
		b++;
	}
	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a]);
		write(1, "\n", 1);
		a++;
	}
	return (0);
}
