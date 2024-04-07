/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwiecek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 09:14:36 by mwiecek           #+#    #+#             */
/*   Updated: 2024/02/01 10:34:38 by mwiecek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_ft(int *nbr)
{
	*nbr = 42;
	
	return(*nbr);
}
int	main(void)
{
	int number;
	int *pointer = &number;

	printf("%d", ft_ft(pointer)); 
	return (0);
}
