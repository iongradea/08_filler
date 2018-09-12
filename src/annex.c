/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igradea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 17:11:56 by igradea           #+#    #+#             */
/*   Updated: 2017/02/11 21:27:06 by igradea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "../inc/filler.h"

void	free_tab_str(char **str)
{
	int		i;

	DEBUG ? ft_putstr_fd("launching free_tab_str ...\n", 2) : DEBUG;
	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	str = NULL;
}

void		prt_res(t_data *data)
{
	int		i;

	DEBUG ? ft_putstr_fd("launching prt_res ...\n", 2) : DEBUG;
	i = 0;
	ft_printf("%i %i\n", data->out_y, data->out_x);
	while (i < data->lenmy)
	{
		free(data->map[i]);
		i++;
	}
	free(data->map);
	data->map = NULL;
	i = 0;
	while (i < data->lenpy)
	{
		free(data->piece[i]);
		i++;
	}
	free(data->piece);
	data->piece = NULL;
	data->out_x = UNDEFINED;
	data->out_y = UNDEFINED;
}
