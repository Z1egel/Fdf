/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 22:46:30 by mbennis           #+#    #+#             */
/*   Updated: 2019/02/26 22:47:16 by mbennis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft/libft.h"
# include "sources/minilibx/mlx.h"
# include <math.h>

typedef struct  s_ptrs{
    void    *mlx;
    void    *win;
    int     max_width;
    int     max_height;
}               t_ptrs;

#endif
