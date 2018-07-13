/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_go_to_2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:56 by igradea           #+#    #+#             */
/*   Updated: 2017/02/11 21:27:06 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/filler.h"

//

int   go_to_west_bot(t_data *data)
{
  int i;
  int j;

  j = 0;
  i = data->lenmy - 1;
  while (j < data->lenmx)
  {
    while (i > data->lenmy / 2)
    {
      if (test_coord(BOT_RIGHTX, BOT_RIGHTY, data))
        return (save_coord(BOT_RIGHTX, BOT_RIGHTY, data));
      else if (test_coord(TOP_RIGHTX, TOP_RIGHTY, data))
        return (save_coord(TOP_RIGHTX, TOP_RIGHTY, data));
      i--;
    }
    j++;
    i = data->lenmy - 1;
  }
  return (FALSE);
}

int   go_to_west_top(t_data *data)
{
  int i;
  int j;

  j = 0;
  i = data->lenmy / 2;
  while (j < data->lenmx - 1)
  {
    while (i >= 0)
    {
      if (test_coord(BOT_RIGHTX, BOT_RIGHTY, data))
        return (save_coord(BOT_RIGHTX, BOT_RIGHTY, data));
      else if (test_coord(TOP_RIGHTX, TOP_RIGHTY, data))
        return (save_coord(TOP_RIGHTX, TOP_RIGHTY, data));
      i--;
    }
    j++;
    i = data->lenmy - 1;
  }
  return (FALSE);
}

int   go_to_east_bot(t_data *data)
{
  int i;
  int j;

  j = data->lenmx - 1;
  i = data->lenmy / 2;
  while (j >= 0)
  {
    while (i < data->lenmy)
    {
      if (test_coord(BOT_LEFTX, BOT_LEFTY, data))
        return (save_coord(BOT_LEFTX, BOT_LEFTY, data));
      else if (test_coord(TOP_LEFTX, TOP_LEFTY, data))
        return (save_coord(TOP_LEFTX, TOP_LEFTY, data));
      i++;
    }
    j--;
    i = 0;
  }
  return (FALSE);
}

int   go_to_east_top(t_data *data)
{
  int i;
  int j;

  j = data->lenmx - 1;
  i = 0;
  while (j >= 0)
  {
    while (i < data->lenmy / 2)
    {
      if (test_coord(BOT_LEFTX, BOT_LEFTY, data))
        return (save_coord(BOT_LEFTX, BOT_LEFTY, data));
      else if (test_coord(TOP_LEFTX, TOP_LEFTY, data))
        return (save_coord(TOP_LEFTX, TOP_LEFTY, data));
      i++;
    }
    j--;
    i = 0;
  }
  return (FALSE);
}
