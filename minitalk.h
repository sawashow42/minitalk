/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 01:13:10 by shsawaki          #+#    #+#             */
/*   Updated: 2022/10/06 22:44:21 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"
# include <unistd.h>
# include <signal.h>
# include <stdlib.h>

typedef struct s_str {
	char	str;
	int		index;
}	t_str;

void	handler(int signum);
void	send_message(int pid, char *message);
int		pid_check(char *pid);

#endif