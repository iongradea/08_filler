/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_dir_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:56 by igradea           #+#    #+#             */
/*   Updated: 2017/02/11 21:27:06 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/filler.h"

int   test_player_in_west_bot(t_data *data)
{
  int i;

  DEBUG ? ft_putstr_fd("launching test_player_in_west_bot ...\n", 2) : DEBUG;
  i = data->lenmy / 2;
  while (i < data->lenmy)
  {
    if (data->map[i][0] == data->player)
      return (TRUE);
    i++;
  }
  return (FALSE);
}

int   test_player_in_west_top(t_data *data)
{
  int i;

  DEBUG ? ft_putstr_fd("launching test_player_in_west_top ...\n", 2) : DEBUG;
  i = 0;
  while (i < data->lenmy / 2)
  {
    if (data->map[i][0] == data->player)
      return (TRUE);
    i++;
  }
  return (FALSE);
}

int   test_player_in_east_bot(t_data *data)
{
  int i;

  DEBUG ? ft_putstr_fd("launching test_player_in_east_bot ...\n", 2) : DEBUG;
  i = data->lenmy / 2;
  while (i < data->lenmy)
  {
    if (data->map[i][data->lenmx - 1] == data->player)
      return (TRUE);
    i++;
  }
  return (FALSE);
}

int   test_player_in_east_top(t_data *data)
{
  int i;

  DEBUG ? ft_putstr_fd("launching test_player_in_east_top ...\n", 2) : DEBUG;
  i = 0;
  while (i < data->lenmy / 2)
  {
    if (data->map[i][data->lenmx - 1] == data->player)
      return (TRUE);
    i++;
  }
  return (FALSE);
}
