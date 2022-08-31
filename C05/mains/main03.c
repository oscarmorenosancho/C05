/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:52:00 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/31 10:02:41 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(int argc, char const *argv[])
{
	int nb;
	int power;
	int res;

	nb = 2;
	power = 1;
	if (argc > 2)
	{
		nb = atoi(argv[1]);
		power = atoi(argv[2]);
	}
	res = ft_recursive_power(nb, power);
	printf("%d^%d = %d\n", nb, power, res);
	return (0);
}
