/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player_go_to_fill.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:56 by igradea           #+#    #+#             */
/*   Updated: 2017/02/11 21:27:06 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/filler.h"

int   fill_north(t_data *data)
{
	int		i;
	int		j;

	i = -data->lenpy;
	j = -data->lenpx;
	while (i < data->lenmy + data->lenpy)
	{
		while (j < data->lenmx + data->lenpx)
		{
			if (test_coord(j, i, data))
				return (save_coord(j, i, data));
			j++;
		}
		i++;
		j = -data->lenpx;
	}
	return (FALSE);
}

int   fill_south(t_data *data)
{
	int		i;
	int		j;

	i = data->lenmy + data->lenpy - 1;
	j = data->lenmy + data->lenpx - 1;
	while (i >= 0)
	{
		while (j >= 0)
		{
			if (test_coord(j, i, data))
				return (save_coord(j, i, data));
			j--;
		}
		i--;
		j = data->lenmy + data->lenpx - 1;
	}
	return (FALSE);
}

int   fill_west(t_data *data)
{
  int   i;
  int   j;

  i = data->lenmy + data->lenpy - 1;
  j = -data->lenpx;
  while (j < data->lenmy + data->lenpy)
  {
    while (i >= 0)
    {
      if (test_coord(j, i, data))
        return (save_coord(j, i, data));
      i--;
    }
    j++;
    i = data->lenmy + data->lenpy - 1;
  }
  return (FALSE);
}

int   fill_east(t_data *data)
{
  int   i;
  int   j;

  i = -data->lenpy;
  j = data->lenmx + data->lenpx - 1;
  while (j >= 0)
  {
    while (i < data->lenmy + data->lenpy)
    {
      if (test_coord(j, i, data))
        return (save_coord(j, i, data));
      i++;
    }
    i = -data->lenpy;
    j--;
  }
  return (FALSE);
}
