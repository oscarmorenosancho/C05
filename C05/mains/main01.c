/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:50:29 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/31 09:51:16 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_recursive_factorial(int nb);

int	main(int argc, char const *argv[])
{
	int	nb;
	int	res;

	nb = 2;
	if (argc > 1)
		nb = atoi(argv[1]);
	res = ft_recursive_factorial(nb);
	printf("%d! = %d\n", nb, res);
	return (0);
}
