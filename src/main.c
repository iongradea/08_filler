/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:56 by igradea           #+#    #+#             */
/*   Updated: 2017/02/11 21:27:06 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/filler.h"

static int  set_boolean(t_data *data, int set_start_pos)
{
  data->start_bot_pos = data->first_p_x > data->lenmx / 2 ? TRUE : FALSE;
  return (set_start_pos = TRUE);
}

int   main(void)
{
  char    *line;
  t_data  data;
  int  set_start_pos = FALSE;

  init_data(&data);
  while (get_next_line(0, &line) > 0)
  {
    if (ft_strncmp(line, "$$$", 3) == 0)
      save_player(&line, &data);
    else if (ft_strncmp(line, "Plateau", 7) == 0)
      save_map(&line, &data);
    else if (ft_strncmp(line, "Piece", 5) == 0)
    {
      if (set_start_pos == FALSE)
        set_start_pos = set_boolean(&data, set_start_pos);
      save_piece(&line, &data);
      if (data.start_bot_pos == TRUE)
        solve_dir_bot(&data);
      else
        solve_dir_top(&data);
      prt_res(&data);
    }
  }
  return (0);
}
