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
  static int  count = 0;
  // END TESTING 

  init_data(&data);
  while (get_next_line(0, &line) > 0)
  {
    // fprintf(stderr, "gnl\n");
    if (ft_strncmp(line, "$$$", 3) == 0)
      save_player(&line, &data);
    else if (ft_strncmp(line, "Plateau", 7) == 0)
      save_map(&line, &data);
    else if (ft_strncmp(line, "Piece", 5) == 0)
      save_piece(&line, &data);
    // TESTING
    if (count == 2)
      prt_data(data);
    count++;
    // END TESTING
    ft_printf("12 14\n");
  }
  write(2, "end\n", 4);
  return (0);
}