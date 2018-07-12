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

int   test_player_in_center(t_data *data)
{
  if ((data->map)[data->lenmy / 2][data->lenmx / 2] == '.')
    return (TRUE);
  return (FALSE);
}

int   test_player_in_north(t_data *data)
{
  int j;

  j = 0;
  while (j < data->lenmx)
  {
    if (data->map[0][j] == data->player)
      return (TRUE);
    j++;
  }
  return (FALSE);
}

int   test_player_in_south(t_data *data)
{
  int j;

  j = 0;
  while (j < data->lenmx)
  {
    if (data->map[data->lenmy - 1][j] == data->player)
      return (TRUE);
    j++;
  }
  return (FALSE);
}

int   test_player_in_west(t_data *data)
{
  int i;

  i = 0;
  while (i < data->lenmy)
  {
    if (data->map[i][0] == data->player)
      return (TRUE);
    i++;
  }
  return (FALSE);
}

int   test_player_in_east(t_data *data)
{
  int i;

  i = 0;
  while (i < data->lenmy)
  {
    if (data->map[i][data->lenmx - 1] == data->player)
      return (TRUE);
    i++;
  }
  return (FALSE);
}
