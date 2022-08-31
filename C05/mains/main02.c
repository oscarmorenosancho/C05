/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:49:33 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/31 10:02:14 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_iterative_power(int nb, int power);

int	main(int argc, char const *argv[])
{
	int	nb;
	int	power;
	int	res;

    nb = 2;
    power = 1;
    if (argc > 2)
    {
		nb = atoi(argv[1]);
		power = atoi(argv[2]);
    }
	res = ft_iterative_power(nb, power);
	printf("%d^%d = %d\n", nb, power, res);
	return (0);
}
