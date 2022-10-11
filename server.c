/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 01:30:39 by shsawaki          #+#    #+#             */
/*   Updated: 2022/10/06 22:45:56 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	handler(int signum)
{
	t_str	get_str;

	get_str.str <<= 1;
	get_str.index++;
	if (signum == SIGUSR1)
		get_str.str += 1;
	else if (signum == SIGUSR2)
		get_str.str += 0;
	if (get_str.index == 8)
	{
		if (get_str.str != '\0')
			write(1, &get_str.str, 1);
		get_str.str = 0;
		get_str.index = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	ft_printf("server PID : %d\n", getpid());
	if (sigemptyset(&sa.sa_mask) == -1)
		exit(1);
	sa.sa_handler = handler;
	sigaddset(&sa.sa_mask, SIGUSR1);
	sigaddset(&sa.sa_mask, SIGUSR2);
	sa.sa_flags = 0;
	if (sigaction(SIGUSR1, &sa, NULL) == -1)
		exit(1);
	if (sigaction(SIGUSR2, &sa, NULL) == -1)
		exit(1);
	while (1)
		pause();
	return (0);
}
