/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shsawaki <shsawaki@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 02:10:57 by shsawaki          #+#    #+#             */
/*   Updated: 2022/10/06 22:44:09 by shsawaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	pid_check(char *pid)
{
	int	i;

	i = 0;
	while (pid[i])
	{
		if (!(ft_isdigit(pid[i])))
			return (1);
		i++;
	}
	return (0);
}

void	send_message(int pid, char *message)
{
	int	i;
	int	j;

	i = -1;
	while (message[++i])
	{
		j = 7;
		while (j >= 0)
		{
			if (message[i] >> j & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			j--;
			usleep(500);
		}
	}
	return ;
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	char	*message;

	if (argc != 3)
	{
		ft_putstr_fd("usage:'./client PID message'\n", 1);
		exit(1);
	}
	if (pid_check(argv[1]))
		exit(1);
	pid = ft_atoi(argv[1]);
	if (pid <= 99 || pid > 99999)
		exit(1);
	message = argv[2];
	send_message(pid, message);
	return (0);
}
