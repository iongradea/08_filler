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
  fprintf(stderr, "player : %c\n", data.player);
  fprintf(stderr, "opponent : %c\n", data.opponent);
  fprintf(stderr, "lenmx : %i\n", data.lenmx);
  fprintf(stderr, "lenmy : %i\n", data.lenmy);
  fprintf(stderr, "lenpx : %i\n", data.lenpx);
  fprintf(stderr, "lenpy : %i\n", data.lenpy);
}

void prt_data_map(t_data data) {
  int   i;

  i = 0;
  while (i < data.lenmy)
  {
    fprintf(stderr, "%s\n", data.map[i]);
    i++;
  }
}

void prt_data_piece(t_data data) {
  int   i;

  i = 0;
  while (i < data.lenpy)
  {
    fprintf(stderr, "%s\n", data.piece[i]);
    i++;
  }
}

// works for map00
void prt_vm(void) {
  char  *line;

  while (get_next_line(0, &line) > 0)
  {
    fprintf(stderr, "%s\n", line);
    ft_printf("12 14\n");
  }
}
