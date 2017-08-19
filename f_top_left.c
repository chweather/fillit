/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_top_left.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyeh <vyeh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 15:37:55 by violetyeh         #+#    #+#             */
/*   Updated: 2017/07/24 14:09:53 by vyeh             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_position	*f_zero(t_position *tetri, int nb_tetri)
{
	int i;
	int k;

	i = 1;
	k = 0;
	while (k < nb_tetri)
	{
		tetri[k].x[i] = tetri[k].x[i] - tetri[k].x[0];
		tetri[k].y[i] = tetri[k].y[i] - tetri[k].y[0];
		i++;
		if (i > 3)
		{
			tetri[k].x[0] = 0;
			tetri[k].y[0] = 0;
			i = 1;
			k++;
		}
	}
	return (tetri);
}
