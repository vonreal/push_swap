/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jna <jna@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/24 21:11:36 by jna               #+#    #+#             */
/*   Updated: 2021/07/25 01:11:54 by jna              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdbool.h>
# include <limits.h>
# include "../libft/libft.h"

# include <stdio.h>

typedef struct	s_stack
{
	int		*list;
	int		top;
	int		size;
}				t_stack;

typedef struct	s_info
{
	int		*ascending;
	int		mid_idx;
	int		midian;
	t_stack	chunks;
}				t_info;

/*
**		codes/
*/
bool		is_valid(int *len, char **target);
void		free_and_null(char *str, char **strs);
void		free_and_null_stack(t_stack *stack);
t_stack 	init_stack(int size);
t_info	    init_info(int stack_size);
void	    init(t_stack *a, t_stack *b, t_info *infos);

/*
**		utils
*/
bool		is_num(char *str);
bool		is_range(int min, int max, long long num);
long long	get_num(char *str);
bool		error_msg(void);
void		*allocate(int size, int length);



#endif
