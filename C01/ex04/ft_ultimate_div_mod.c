/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:41:53 by mwiecek           #+#    #+#             */
/*   Updated: 2024/02/01 11:56:41 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int*b)
{
	int	temp;

	temp = *a;
	*a = temp / *b;
	*b = temp % *b;
}
int	main(void)
{
	int a = 5;
	int b = 3;
	int *c = &a;
	int *d = &b;

	ft_ultimate_div_mod(c, d);
	printf("%d", *c);
	printf("%d", *d);
}
