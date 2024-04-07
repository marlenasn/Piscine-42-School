/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 12:42:10 by mwiecek           #+#    #+#             */
/*   Updated: 2024/02/01 10:58:25 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap( int *a, int *b )
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
int main(void)
{
	int a = 1;
	int b = 2;

	ft_swap(&a, &b);
	printf ("%d\n", a);
	printf ("%d\n", b);
	return (0);
}
