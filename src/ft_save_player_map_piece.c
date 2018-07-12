/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_save_player_map_piece.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:56 by igradea           #+#    #+#             */
/*   Updated: 2017/02/11 21:27:06 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/filler.h"

void save_player(char **line, t_data *data)
{
  data->player = (*line)[10] == '1' ? PLAYER1 : PLAYER2;
  data->opponent = data->player == PLAYER1 ? PLAYER2 : PLAYER1;
  fprintf(stderr, "player : %c\n", data->player);
}

void save_map(char **line, t_data *data)
{
  char  **str_tab;
  int   i;

  i = 0;
  str_tab = ft_strsplit(*line);
  data->lenmy = ft_atoi(str_tab[1]);
  data->lenmx = ft_atoi(str_tab[2]);
  data->map = (char**)malloc(sizeof(char*) * data->lenmy);
  free_tab_str(str_tab);
  free(*line);
  get_next_line(0, line);
  free(*line);
  while (i < data->lenmy)
  {
    get_next_line(0, line);
    (data->map)[i] = ft_strdup(*line + 4);
    free(*line);
    i++;
  }
  *line = NULL;
  get_first_piece(data);
  get_last_piece(data);
}

void save_piece(char **line, t_data *data)
{
  char  **str_tab;
  int   i;

  i = 0;
  str_tab = ft_strsplit(*line);
  data->lenpy = ft_atoi(str_tab[1]);
  data->lenpx = ft_atoi(str_tab[2]);
  data->piece = (char**)malloc(sizeof(char*) * data->lenpy);
  free(*line);
  free_tab_str(str_tab);
  while (i < data->lenpy)
  {
    get_next_line(0, line);
    (data->piece)[i] = ft_strdup(*line);
    free(*line);
    i++;
  }
  *line = NULL;
  get_top_piece(data);
  get_bot_piece(data);
}
