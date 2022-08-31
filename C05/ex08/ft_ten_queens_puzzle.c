/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 09:23:23 by omoreno-          #+#    #+#             */
/*   Updated: 2022/08/31 09:23:36 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_ten_queens_puzzle(void)
{
    // 1) Start in the leftmost column
    // 2) If all queens are placed
    //     return true
    // 3) Try all rows in the current column.  Do following
    //      for every tried row.
    //     a) If the queen can be placed safely in this row
    //     then mark this [row, column] as part of the 
    //     solution and recursively check if placing  
    //     queen here leads to a solution.
    //     b) If placing queen in [row, column] leads to a
    //     solution then return true.
    //     c) If placing queen doesn't lead to a solution 
    //     then unmark this [row, column] (Backtrack) 
    //     and go to step (a) to try other rows.
    // 3) If all rows have been tried and nothing worked, 
    //      return false to trigger backtracking.

    //https://www.geeksforgeeks.org/printing-solutions-n-queen-problem/
    return (0);
}
