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
# define DEBUG 0

// test_coord
# define IS_OUTSIDE_Y i + y >= data->lenmy || i + y < 0
# define IS_OUTSIDE_X j + x >= data->lenmx || j + x < 0
# define IS_OPPONENT data->map[i + y][j + x] == data->opponent
# define IS_OPPONENT_M data->map[i + y][j + x] == data->opponent + 32
# define IS_PLAYER data->map[i + y][j + x] == data->player
# define IS_PLAYER_M data->map[i + y][j + x] == data->player + 32

// extreme pieces
# define FIRST_BOTRIGHTX data->first_p_x - data->p_botx
# define FIRST_BOTRIGHTY data->first_p_y - data->p_boty
# define LAST_TOPLEFTX data->last_p_x - data->p_topx
# define LAST_TOPLEFTY data->last_p_y - data->p_topy

// piece motion to direction
# define BOT_LEFTX j - data->p_topx
# define BOT_LEFTY i - data->p_boty
# define BOT_RIGHTX j - data->p_botx
# define BOT_RIGHTY i - data->p_boty
# define TOP_LEFTX j - data->p_botx
# define TOP_LEFTY i - data->p_topy
# define TOP_RIGHTX j - data->p_topx
# define TOP_RIGHTY i - data->p_topy

// alternate filling
// cycle west is always true
# define AREA data->lenmx * data->lenmy
# define CYCLE_NORTH *count % AREA < AREA / 4
# define CYCLE_SOUTH *count % AREA < AREA / 2
# define CYCLE_EAST *count % AREA < AREA * 3 / 4

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
  int   p_topx;
  int   p_topy;
  int   p_botx;
  int   p_boty;
  int   first_p_x;
  int   first_p_y;
  int   last_p_x;
  int   last_p_y;
  int   start_bot_pos;
  int   out_x;
  int   out_y;
}               t_data;

// PARSING
void init_data(t_data *data);
void save_player(char **line, t_data *data);
void save_map(char **line, t_data *data);
void save_piece(char **line, t_data *data);
void get_top_piece(t_data *data);
void get_bot_piece(t_data *data);
void get_first_piece(t_data *data);
void get_last_piece(t_data *data);

// CHECK COORD
int   test_coord(int x, int y, t_data *data);
int   save_coord(int x, int y, t_data *data);

// MOTION
int   solve_dir_bot(t_data *data);
int   solve_dir_top(t_data *data);
int   test_player_in_center(t_data *data);
int   test_player_in_north(t_data *data);
int   test_player_in_south(t_data *data);
int   test_player_in_west_small(t_data *data);
int   test_player_in_east_small(t_data *data);
int   test_player_in_west_bot(t_data *data);
int   test_player_in_west_top(t_data *data);
int   test_player_in_east_bot(t_data *data);
int   test_player_in_east_top(t_data *data);
int   go_to_center(t_data *data);
int   go_to_north(t_data *data);
int   go_to_south(t_data *data);
int   go_to_west_small(t_data *data);
int   go_to_east_small(t_data *data);
int   go_to_west_top(t_data *data);
int   go_to_west_bot(t_data *data);
int   go_to_east_top(t_data *data);
int   go_to_east_bot(t_data *data);
int   fill_north(t_data *data);
int   fill_south(t_data *data);
int   fill_east(t_data *data);
int   fill_west(t_data *data);
void		prt_res(t_data *data);

// ANNEX
void	free_tab_str(char **str);

// TEST & ANNEX
void prt_vm(void);
void prt_data(t_data data);
void prt_data_map(t_data data);
void prt_data_piece(t_data data);

#endif
