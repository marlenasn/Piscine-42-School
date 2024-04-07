/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 13:28:23 by mwiecek           #+#    #+#             */
/*   Updated: 2024/02/01 11:45:12 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
int	main(void)
{
	int a = 5;
	int b = 2;
	int c;
	int d;
	int *div = &c;
	int *mod = &d;       	

	ft_div_mod(a, b, div, mod);
	
	printf("%d", *div);
	printf("%d", *mod);
}
