/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:45:15 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/24 21:22:02 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	n;

	n = 0;
	size--;
	while (n < size)
	{
		if (tab[n] > tab[n + 1])
		{
			temp = tab[n];
			tab[n] = tab[n + 1];
			tab[n + 1] = temp;
			n = 0;
		}
		else
			n++;
	}
}
