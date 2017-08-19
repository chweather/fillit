/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vyeh <vyeh@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:21:50 by vyeh              #+#    #+#             */
/*   Updated: 2017/08/15 15:40:04 by cweather         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H

# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# define BUFFER 4096

typedef struct	s_position
{
	int	x[4];
	int	y[4];
}				t_position;

char			**f_final_grid(int cut);
void			f_check_l_and_k(int *l, int *k);
void			f_check_i_and_c(int *i, int *j, int *cmpt, char *str);
t_position		*f_map(char *str, int i, int j, int k);
void			f_remove_tetri(char **grid, int k, int cut);
int				f_check_char(char *str, int i);
int				f_check_char_b(char *str);
int				f_check_newline(char *str);
int				f_check_sharp(char *str, int i);
int				f_check_links(char *str, int i);
void			f_display_tab(char **grid, int cut);
void			f_free_grid(char **grid, int cut);
int				f_print_tetri(char **grid, t_position *tetriminos, \
	int nb_tetri, int k);
void			f_place_tetri(char **grid, t_position tetriminos, \
	int pos, int k);
void			f_solve(char *str);
int				f_check_nb_tetri(char **grid, int cut);
int				f_is_possible(char **grid, t_position tetriminos, \
	int pos, int cut);
int				f_sqrt(int n);
int				f_nb_tetri(char *str);
char			*f_read(int argc, char **argv);
t_position		*f_zero(t_position *tetri, int nb_tetri);
int				f_verify_tetri(char *str);
int				f_check_piece(char *str, int i);
size_t			ft_strlen(const char *str);
void			ft_putstr(char const *s);
void			ft_putchar(char c);

#endif
