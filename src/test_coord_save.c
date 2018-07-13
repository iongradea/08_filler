/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_coord.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:56 by igradea           #+#    #+#             */
/*   Updated: 2017/02/11 21:27:06 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/filler.h"

int     test_coord(int x, int y, t_data *data)
{
  int   i;
  int   j;
  int   count;

  i = 0;
  j = 0;
  count = 0;
  while (i < data->lenpy)
  {
    while (j < data->lenpx)
    {
      if (data->piece[i][j] == '*' &&
      (IS_OUTSIDE_Y || IS_OUTSIDE_X || IS_OPPONENT || IS_OPPONENT_M))
        return (FALSE);
      if (data->piece[i][j] == '*' && (IS_PLAYER || IS_PLAYER_M))
        count++;
      j++;
    }
    j = 0;
    i++;
  }
  return (count == 1 ? TRUE : FALSE);
}

int     save_coord(int x, int y, t_data *data)
{
  data->out_x = x;
  data->out_y = y;
  return (TRUE);
}
