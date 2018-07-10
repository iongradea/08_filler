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

// int   test_player_in_center(t_data *data)
// {
//   int   mid_x;
//   int   mid_y;
//
//
// }

int   test_player_in_north(t_data *data)
{
  int j;

  j = 0;
  fprintf(stderr, "test_player_in_north\n");
  while (j < data->lenmx)
  {
    if (data->map[0][j] == data->player)
      return (TRUE);
    j++;
  }
  return (FALSE);
}
