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

int   main(void)
{
  char    *line;
  t_data  data;
  // TESTING
  static int  boolean = FALSE;
  // END TESTING

  init_data(&data);
  while (get_next_line(0, &line) > 0)
  {
    if (ft_strncmp(line, "$$$", 3) == 0)
      save_player(&line, &data);
    else if (ft_strncmp(line, "Plateau", 7) == 0)
    {
      save_map(&line, &data);
      boolean = FALSE;
    }
    else if (ft_strncmp(line, "Piece", 5) == 0)
    {
      save_piece(&line, &data);
      if (solve_dir_bot(&data) == TRUE)
        ft_printf("%i %i\n", data.out_y, data.out_x);
      // TESTING
      boolean = TRUE;
    }
    // TESTING
    if (boolean == TRUE)
    {
      fprintf(stderr, "DATA\n");
      prt_data(data);
    }
    // END TESTING
  }
  write(2, "end\n", 4);
  return (0);
}
