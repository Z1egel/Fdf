/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennis <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 22:47:23 by mbennis           #+#    #+#             */
/*   Updated: 2019/02/27 00:06:34 by mbennis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static int	close_window(int key, void *param)
{
    if (key == 53)
    {
        mlx_destroy_window(((t_ptrs *)param)->mlx, ((t_ptrs *)param)->win);
        exit(0);
    }
    return(0);
}

static void	draw_pixels(void *ptrs)
{
	int 	x;
	int 	y;
	int     i;

	x = 0;
	i = 0;
	y = ((t_ptrs *)ptrs)->max_height / 6;
	while (i < y)
    {
	    while (x < ((t_ptrs *)ptrs)->max_width)
	    {
            mlx_pixel_put(((t_ptrs *) ptrs)->mlx, ((t_ptrs *) ptrs)->win, x, i, 0x990000);
            x++;
        }
	    x = 0;
	    i++;
	}
    mlx_string_put(((t_ptrs *)ptrs)->mlx, ((t_ptrs *)ptrs)->win, ((t_ptrs *)ptrs)->max_width/2 - 20, ((t_ptrs *)ptrs)->max_height/12, 0xFFFFFF, "Fdf");

}


int		main(void)
{
	void    *mlx_ptr;
	void    *win_ptr;
	int		max_width;
	int 	max_height;
	t_ptrs  arr;

	max_width = 800;
	max_height = 600;
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, max_width, max_height, "fdf");
	arr.mlx = mlx_ptr;
	arr.win = win_ptr;
	arr.max_width = max_width;
	arr.max_height = max_height;
	draw_pixels(&arr);
	mlx_key_hook(win_ptr, close_window, &arr);
	mlx_loop(mlx_ptr);
    return (0);
}
