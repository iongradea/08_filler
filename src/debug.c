/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:56 by igradea           #+#    #+#             */
/*   Updated: 2017/02/11 21:27:06 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/filler.h"

void prt_data(t_data data) {
  DEBUG ? ft_putstr_fd("launching prt_data ...\n", 2) : DEBUG;
  fprintf(stderr, "player : %c\n", data.player);
  fprintf(stderr, "opponent : %c\n", data.opponent);
  fprintf(stderr, "lenmx : %i\n", data.lenmx);
  fprintf(stderr, "lenmy : %i\n", data.lenmy);
  fprintf(stderr, "lenpx : %i\n", data.lenpx);
  fprintf(stderr, "lenpy : %i\n", data.lenpy);
  fprintf(stderr, "p_topx : %i\n", data.p_topx);
  fprintf(stderr, "p_topy : %i\n", data.p_topy);
  fprintf(stderr, "p_botx : %i\n", data.p_botx);
  fprintf(stderr, "p_boty : %i\n", data.p_boty);
  fprintf(stderr, "first_p_x : %i\n", data.first_p_x);
  fprintf(stderr, "first_p_y : %i\n", data.first_p_y);
  fprintf(stderr, "last_p_x : %i\n", data.last_p_x);
  fprintf(stderr, "last_p_y : %i\n", data.last_p_y);
}

void prt_data_map(t_data data) {
  int   i;

  i = 0;
  DEBUG ? ft_putstr_fd("launching prt_data_map ...\n", 2) : DEBUG;
  while (i < data.lenmy)
  {
    fprintf(stderr, "%s\n", data.map[i]);
    i++;
  }
}

void prt_data_piece(t_data data) {
  int   i;

  DEBUG ? ft_putstr_fd("launching prt_data_piece ...\n", 2) : DEBUG;
  i = 0;
  while (i < data.lenpy)
  {
    fprintf(stderr, "%s\n", data.piece[i]);
    i++;
  }
}

// works for map00
void prt_vm(void)
{
  char  *line;

  DEBUG ? ft_putstr_fd("launching prt_vm ...\n", 2) : DEBUG;
  while (get_next_line(0, &line) > 0)
  {
    fprintf(stderr, "%s\n", line);
    ft_printf("12 14\n");
  }
}
