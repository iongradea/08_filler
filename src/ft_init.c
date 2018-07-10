/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:56 by igradea           #+#    #+#             */
/*   Updated: 2017/02/11 21:27:06 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/filler.h"

void init_data(t_data *data) {
  data->lenmx = UNDEFINED;
  data->lenmy = UNDEFINED;
  data->lenpx = UNDEFINED;
  data->lenpy = UNDEFINED;
  data->p_topx = UNDEFINED;
  data->p_topy = UNDEFINED;
  data->p_botx = UNDEFINED;
  data->p_boty = UNDEFINED;
  data->first_p_x = UNDEFINED;
  data->first_p_y = UNDEFINED;
  data->last_p_x = UNDEFINED;
  data->last_p_y = UNDEFINED;
}
