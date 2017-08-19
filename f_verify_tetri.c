/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_verify_tetri.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyeh <vyeh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 15:07:29 by violetyeh         #+#    #+#             */
/*   Updated: 2017/07/31 19:34:46 by cweather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		f_check_piece(char *str, int i)
{
	int		j;
	int		c;

	c = 20;
	j = 0;
	while (i < (int)ft_strlen(str))
	{
		j = 0;
		while ((i != c + 1) && (i < (int)ft_strlen(str)))
		{
			if (str[i] == 35)
				j++;
			i++;
		}
		if (j != 4)
			return (0);
		c += 21;
	}
	return (1);
}

int		f_verify_tetri(char *str)
{
	int		i;

	i = 0;
	if (f_check_piece(str, i) != 1)
		return (5);
	if (f_check_char(str, i) != 1)
		return (1);
	if (f_check_sharp(str, i) != 1)
		return (2);
	if (f_check_links(str, i) != 1)
		return (3);
	if (f_check_newline(str) != 1)
		return (4);
	return (0);
}
