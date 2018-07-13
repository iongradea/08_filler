/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_dir.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:56 by igradea           #+#    #+#             */
/*   Updated: 2017/02/11 21:27:06 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/filler.h"

static int  fill_random(t_data *data, int *count)
{
  if (AREA < 400 && fill_north(data))
    return (TRUE);
  else if (CYCLE_NORTH && fill_north(data) == TRUE)
  {
    (*count)++;
    return (TRUE);
  }
  else if (CYCLE_SOUTH && fill_south(data) == TRUE)
  {
    (*count)++;
    return(TRUE);
  }
  else if (CYCLE_EAST && fill_east(data) == TRUE)
  {
    (*count)++;
    return(TRUE);
  }
  else
  {
    (*count)++;
    return(fill_west(data));
  }
  return (save_coord(0, 0, data));
}

int   solve_dir_bot(t_data *data)
{
  static int  count = 0;

  if (test_player_in_center(data) == FALSE &&
  FIRST_BOTRIGHTX > data->lenmx / 2 && FIRST_BOTRIGHTY > data->lenmy / 2 &&
  go_to_center(data) == TRUE)
    return (TRUE);
  if (test_player_in_north(data) == FALSE && go_to_north(data) == TRUE)
    return (TRUE);
  if (AREA < 400 && test_player_in_west_small(data) && go_to_west_small(data))
    return (TRUE);
  if (AREA >= 400 && test_player_in_west_bot(data) == FALSE &&
    go_to_west_bot(data) == TRUE)
    return (TRUE);
  if (AREA >= 400 && test_player_in_west_top(data) == FALSE &&
    go_to_west_top(data) == TRUE)
    return (TRUE);
  if (AREA < 400 && test_player_in_east_small(data) && go_to_east_small(data))
    return (TRUE);
  if (test_player_in_east_top(data) == FALSE && go_to_east_top(data) == TRUE)
    return (TRUE);
  if (test_player_in_east_bot(data) == FALSE && go_to_east_bot(data) == TRUE)
    return (TRUE);
  if (test_player_in_south(data) == FALSE && go_to_south(data) == TRUE)
    return (TRUE);
  return (fill_random(data, &count));
}

int   solve_dir_top(t_data *data)
{
  static int  count = 0;

  if (test_player_in_center(data) == FALSE &&
  LAST_TOPLEFTX < data->lenmx / 2 && LAST_TOPLEFTY < data->lenmy / 2 &&
  go_to_center(data) == TRUE)
    return (TRUE);
  if (AREA < 400 && test_player_in_east_small(data) && go_to_east_small(data))
    return (TRUE);
  if (AREA >= 400 && test_player_in_east_top(data) == FALSE &&
    go_to_east_top(data) == TRUE)
    return (TRUE);
  if (AREA >= 400 && test_player_in_east_bot(data) == FALSE &&
    go_to_east_bot(data) == TRUE)
    return (TRUE);
  if (test_player_in_south(data) == FALSE && go_to_south(data) == TRUE)
    return (TRUE);
  if (AREA < 400 && test_player_in_west_small(data) &&go_to_west_small(data))
    return (TRUE);
  if (test_player_in_west_bot(data) == FALSE && go_to_west_bot(data) == TRUE)
    return (TRUE);
  if (test_player_in_west_top(data) == FALSE && go_to_west_top(data) == TRUE)
    return (TRUE);
  if (test_player_in_north(data) == FALSE && go_to_north(data) == TRUE)
    return (TRUE);
  return (fill_random(data, &count));
}
