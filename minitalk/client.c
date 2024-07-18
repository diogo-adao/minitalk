/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:37:38 by diolivei          #+#    #+#             */
/*   Updated: 2024/07/18 20:02:23 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void sending_process(int pid, unsigned char character)
{
	unsigned char tmp = character;
	int bit = 8;

	while (bit > 0)
	{
		bit--;
		tmp = character >> bit;
		if (tmp % 2 == 0)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(100);
	}
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		ft_printf("Usage: <PID> <MESSAGE>");
		exit(0);
	}

	pid_t pid = ft_atoi(argv[1]);
	int i = 0;

	while (argv[2][i])
	{
		sending_process(pid, argv[2][i]);
		i++;
	}
	sending_process(pid, '\0');
	return (0);
}
