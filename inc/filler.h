/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:56 by igradea           #+#    #+#             */
/*   Updated: 2017/02/11 21:27:06 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H

# define PLAYER1 'O'
# define PLAYER2 'X'

# define TRUE 1
# define FALSE 0
# define ERROR -1
# define UNDEFINED -2

#include "../libft/inc/libft.h"
#include "../libft/inc/ft_printf.h"
#include "../libft/inc/get_next_line.h"
#include <stdio.h>

typedef struct  s_data
{
  char  player;
  char  opponent;
  char  **map;
  char  **piece;
  int   lenmx;
  int   lenmy;
  int   lenpx;
  int   lenpy;
}               t_data;

// PARSING
void init_data(t_data *data);
void save_player(char **line, t_data *data);
void save_map(char **line, t_data *data);
void save_piece(char **line, t_data *data);



// TEST & ANNEX
void prt_vm(void);
void prt_data(t_data data);
void prt_data_map(t_data data);
void prt_data_piece(t_data data);

void	free_tab_str(char **str);

#endif
