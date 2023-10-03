/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrohit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:03:14 by rrohit          #+#    #+#             */
/*   Updated: 2023/07/31 15:20:16 by rrohit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	val_a;

	val_a = *a;
	*a = *b;
	*b = val_a;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 90;
	b = 18;
	ft_swap(&a, &b);
	printf("%d\n%d", a, b);
	return(0);
}*/