/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_dir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:56 by igradea           #+#    #+#             */
/*   Updated: 2017/02/11 21:27:06 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/filler.h"

int   go_to_center(t_data *data)
{
  if (data->start_bot_pos == TRUE &&
    test_coord(FIRST_BOTRIGHTX, FIRST_BOTRIGHTY, data) == TRUE)
    return (save_coord(FIRST_BOTRIGHTX, FIRST_BOTRIGHTY, data));
  // fprintf(stderr, "go_center after bot\n");
  if (data->start_bot_pos == FALSE &&
    test_coord(LAST_TOPLEFTX, LAST_TOPLEFTY, data) == TRUE)
    return (save_coord(LAST_TOPLEFTX, LAST_TOPLEFTY, data));
  // fprintf(stderr, "go_center after top\n");
  return (FALSE);
}

int   go_to_north(t_data *data)
{
  int i;
  int j;

  i = 0;
  j = 0;
  while (i < data->lenmy)
  {
    while (j < data->lenmx)
    {
      if (test_coord(BOT_RIGHTX, BOT_RIGHTY, data))
        return (save_coord(BOT_RIGHTX, BOT_RIGHTY, data));
      else if (test_coord(BOT_LEFTX, BOT_LEFTY, data))
        return (save_coord(BOT_LEFTX, BOT_LEFTY, data));
      j++;
    }
    j = 0;
    i++;
  }
  return (FALSE);
}

int   go_to_south(t_data *data)
{
  int i;
  int j;

  j = data->lenmx - 1;
  i = data->lenmy - 1;
  while (i > 0)
  {
    while (j > 0)
    {
      if (test_coord(TOP_LEFTX, TOP_LEFTY, data))
        return (save_coord(TOP_LEFTX, TOP_LEFTY, data));
      else if (test_coord(TOP_RIGHTX, TOP_RIGHTY, data))
        return (save_coord(TOP_RIGHTX, TOP_RIGHTY, data));
      j--;
    }
    j = data->lenmx - 1;
    i--;
  }
  return (FALSE);
}

int   go_to_west(t_data *data)
{
  int i;
  int j;

  j = 0;
  i = data->lenmy - 1;
  while (j < data->lenmx)
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

int   go_to_east(t_data *data)
{
  int i;
  int j;

  j = data->lenmx - 1;
  i = 0;
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
