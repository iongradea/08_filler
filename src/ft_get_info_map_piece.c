/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_info_map_piece.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:56 by igradea           #+#    #+#             */
/*   Updated: 2017/02/11 21:27:06 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/filler.h"

void get_top_piece(t_data *data)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (i < data->lenpy)
  {
    while (j < data->lenpx)
    {
      if ((data->piece)[i][j] == '*')
      {
        data->p_topx = j;
        data->p_topy = i;
        return ;
      }
      j++;
    }
    j = 0;
    i++;
  }
}

void get_bot_piece(t_data *data)
{
  int   i;
  int   j;

  i = data->lenpy - 1;
  j = data->lenpx - 1;
  while (i >= 0)
  {
    while (j >= 0)
    {
      if ((data->piece)[i][j] == '*')
      {
        data->p_botx = j;
        data->p_boty = i;
        return ;
      }
      j--;
    }
    j = data->lenpx - 1;
    i--;
  }
}

void get_first_piece(t_data *data)
{
  int   i;
  int   j;

  i = 0;
  j = 0;
  while (i < data->lenmy)
  {
    while (j < data->lenmx)
    {
      if (data->map[i][j] == data->player ||
        data->map[i][j] == data->player + 32)
      {
        data->first_p_x = j;
        data->first_p_y = i;
        return ;
      }
      j++;
    }
    j = 0;
    i++;
  }
}

void get_last_piece(t_data *data)
{
  int   i;
  int   j;

  i = data->lenmy - 1;
  j = data->lenmx - 1;
  while (i >= 0)
  {
    while (j >= 0)
    {
      if (data->map[i][j] == data->player ||
        data->map[i][j] == data->player + 32)
      {
        data->last_p_x = j;
        data->last_p_y = i;
        return ;
      }
      j--;
    }
    j = data->lenmx - 1;
    i--;
  }
}
