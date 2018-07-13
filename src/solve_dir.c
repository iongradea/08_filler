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

int   solve_dir_bot(t_data *data)
{
  static int  count = 0;

  if (test_player_in_center(data) == FALSE &&
  FIRST_BOTRIGHTX > data->lenmx / 2 && FIRST_BOTRIGHTY > data->lenmy / 2 &&
  go_to_center(data) == TRUE)
  {
    fprintf(stderr, "center\n");
    return (TRUE);
  }
  if (test_player_in_north(data) == FALSE && go_to_north(data) == TRUE)
  {
    fprintf(stderr, "north\n");
    return (TRUE);
  }
  if (test_player_in_west_bot(data) == FALSE && go_to_west_bot(data) == TRUE)
  {
    fprintf(stderr, "west_bot\n");
    return (TRUE);
  }
  if (test_player_in_west_top(data) == FALSE && go_to_west_top(data) == TRUE)
  {
    fprintf(stderr, "west_top\n");
    return (TRUE);
  }
  if (test_player_in_south(data) == FALSE && go_to_south(data) == TRUE)
  {
    fprintf(stderr, "south\n");
    return (TRUE);
  }
  if (test_player_in_east_top(data) == FALSE && go_to_east_top(data) == TRUE)
  {
    fprintf(stderr, "east_bot\n");
    return (TRUE);
  }
  if (test_player_in_east_bot(data) == FALSE && go_to_east_bot(data) == TRUE)
  {
    fprintf(stderr, "east_top\n");
    return (TRUE);
  }
  if (CYCLE_NORTH && fill_north(data))
  {
    fprintf(stderr, "fill_north\n");
    count++;
    return (TRUE);
  }
  else if (CYCLE_SOUTH && fill_south(data) == TRUE)
  {
    fprintf(stderr, "fill_south\n");
    count++;
    return(TRUE);
  }
  else if (CYCLE_EAST && fill_east(data) == TRUE)
  {
    fprintf(stderr, "fill_east\n");
    count++;
    return(TRUE);
  }
  else
  {
    fprintf(stderr, "fill_west\n");
    count++;
    return(fill_west(data));
  }
  fprintf(stderr, "end\n");
  return (save_coord(0, 0, data));
}

int   solve_dir_top(t_data *data)
{
  static int  count = 0;

  if (test_player_in_center(data) == FALSE &&
  LAST_TOPLEFTX < data->lenmx / 2 && LAST_TOPLEFTY < data->lenmy / 2 &&
  go_to_center(data) == TRUE)
  {
    fprintf(stderr, "center\n");
    return (TRUE);
  }
  if (test_player_in_south(data) == FALSE && go_to_south(data) == TRUE)
  {
    fprintf(stderr, "south\n");
    return (TRUE);
  }
  if (test_player_in_east_top(data) == FALSE && go_to_east_top(data) == TRUE)
  {
    fprintf(stderr, "east\n");
    return (TRUE);
  }
  if (test_player_in_east_bot(data) == FALSE && go_to_east_bot(data) == TRUE)
  {
    fprintf(stderr, "east\n");
    return (TRUE);
  }
  if (test_player_in_north(data) == FALSE && go_to_north(data) == TRUE)
  {
    fprintf(stderr, "north\n");
    return (TRUE);
  }
  if (test_player_in_west_bot(data) == FALSE && go_to_west_bot(data) == TRUE)
  {
    fprintf(stderr, "west\n");
    return (TRUE);
  }
  if (test_player_in_west_top(data) == FALSE && go_to_west_top(data) == TRUE)
  {
    fprintf(stderr, "west\n");
    return (TRUE);
  }
  if (CYCLE_NORTH && fill_north(data))
  {
    fprintf(stderr, "fill_north\n");
    count++;
    return (TRUE);
  }
  else if (CYCLE_SOUTH && fill_south(data) == TRUE)
  {
    fprintf(stderr, "fill_south\n");
    count++;
    return(TRUE);
  }
  else if (CYCLE_EAST && fill_east(data) == TRUE)
  {
    fprintf(stderr, "fill_east\n");
    count++;
    return(TRUE);
  }
  else
  {
    fprintf(stderr, "fill_west\n");
    count++;
    return(fill_west(data));
  }
  fprintf(stderr, "end\n");
  return (save_coord(0, 0, data));
}
