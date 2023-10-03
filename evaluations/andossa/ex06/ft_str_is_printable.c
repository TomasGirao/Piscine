/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 02:00:22 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/04 15:46:07 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	check;

	if (*str == '\0')
	{
		return (1);
	}
	check = 1;
	while (*str != '\0')
	{
		if (*str < 32 || *str == 127)
			check = 0;
		str++;
	}
	return (check);
}

/*
int	main(void)
{
	char	*x;
	int	lol;

	x = "";
	lol = ft_str_is_printable(x);
	printf("%i", lol);
	return (0);
}
*/
