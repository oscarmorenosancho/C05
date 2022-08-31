/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 18:52:52 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/29 18:53:21 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	ret;

	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	i = nb;
	ret = 1;
	while (i > 1)
	{
		ret *= i;
		i--;
	}
	return (ret);
}
