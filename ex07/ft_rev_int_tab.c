/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manavarr <manavarr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 20:33:52 by manavarr          #+#    #+#             */
/*   Updated: 2022/03/24 20:37:01 by manavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	n;

	n = 0;
	size--;
	while (n < size)
	{
		temp = tab[n];
		tab[n] = tab[size];
		tab[size] = temp;
		n++;
		size--;
	}
}
