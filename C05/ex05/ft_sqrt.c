/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:15:16 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/31 13:28:41 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	sq;

	if (nb < 1)
		return (0);
	i = 1;
	sq = 1;
	while (sq < nb && sq > 0)
	{
		i++;
		sq = i * i;
	}
	if (sq  == nb)
		return (i);
	return (0);
}
