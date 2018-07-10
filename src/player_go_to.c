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

int   go_to_north(t_data *data)
{
  int i;
  int j;

  i = 0;
  j = 0;
  fprintf(stderr, "go_to_north\n");
  while (i < data->lenmy)
  {
    while (j < data->lenmx)
    {
      if (test_coord(BOT_LEFTX, BOT_LEFTY, data))
        return (save_coord(BOT_LEFTX, BOT_LEFTY, data));
      else if (test_coord(BOT_RIGHTX, BOT_RIGHTY, data))
        return (save_coord(BOT_RIGHTX, BOT_RIGHTY, data));
      j++;
    }
    j = 0;
    i++;
  }
  return (FALSE);
}
