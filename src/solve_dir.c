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
  if (test_player_in_center(data) == FALSE && go_to_center(data) == TRUE)
    return (TRUE);
  if (test_player_in_north(data) == FALSE && go_to_north(data) == TRUE)
    return (TRUE);
  if (test_player_in_west(data) == FALSE && go_to_west(data) == TRUE)
    return (TRUE);
  if (test_player_in_east(data) == FALSE && go_to_east(data) == TRUE)
    return (TRUE);
  if (test_player_in_south(data) == FALSE && go_to_south(data) == TRUE)
    return (TRUE);
  return (fill_random(data));
}

int   solve_dir_top(t_data *data)
{
  if (test_player_in_center(data) == FALSE && go_to_center(data) == TRUE)
    return (TRUE);
  if (test_player_in_south(data) == FALSE && go_to_south(data) == TRUE)
    return (TRUE);
  if (test_player_in_east(data) == FALSE && go_to_east(data) == TRUE)
    return (TRUE);
  if (test_player_in_north(data) == FALSE && go_to_north(data) == TRUE)
    return (TRUE);
  if (test_player_in_west(data) == FALSE && go_to_west(data) == TRUE)
    return (TRUE);
  return (fill_random(data));
}
