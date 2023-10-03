/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrohit <rrohit@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 17:01:38 by rrohit            #+#    #+#             */
/*   Updated: 2023/08/04 17:26:44 by rrohit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*p;

	p = str;
	while (*p != '\0')
	{
		write(1, p, 1);
		p++;
	}
}
/*
int	main()
{
	ft_putstr("Hello");
	return(0);
}
*/