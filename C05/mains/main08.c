/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main08.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:59:53 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/31 10:58:47 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	ft_ten_queens_puzzle(void);
int main(void)
{
	int res;

	res = ft_ten_queens_puzzle();
	printf("Cantidad de soluciones mostradas: %d\n", res);
	return (0);
}
