/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_dir.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:56 by igradea           #+#    #+#             */
/*   Updated: 2017/02/11 21:27:06 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/filler.h"

int   solve_dir_bot(t_data *data)
{
  fprintf(stderr, "solve_dir_bot\n");
  if (test_player_in_north(data) == FALSE && go_to_north(data) == TRUE)
    return (TRUE);
  return (TRUE);
}
