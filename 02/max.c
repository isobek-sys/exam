/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/24 17:40:31 by blukasho          #+#    #+#             */
/*   Updated: 2018/12/24 17:48:17 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int *tab, unsigned int len)
{
	int	res;
	int	i;

	i = len;
	res = 0;
	if (tab)
		while (--i >= 0)
			if (tab[i] > res)
				res = tab[i];
	return (res);
}
