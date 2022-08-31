/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:26:26 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/31 09:27:21 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_iterative_factorial(int nb);

int	main(int argc, char const *argv[])
{
	int	nb;
	int res;

	nb = 2;
	if (argc > 1)
		nb = atoi(argv[1]);
	res = ft_iterative_factorial(nb);
	printf("%d! = %d\n", nb, res);
	return (0);
}
