/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:37:55 by diolivei          #+#    #+#             */
/*   Updated: 2024/07/18 18:54:05 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void receiving_process(int signal)
{
	static unsigned char current;
	static int bit;

	current |= (signal == SIGUSR1);
	bit++;
	if (bit == 8)
	{
		if (current == '\0')
			ft_printf("\n");
		else
			ft_printf("%c", current);
		current = 0;
		bit = 0;
	} else
		current <<= 1;
}

int main()
{
	ft_printf("Welcome 42 Student👋\n");
	ft_printf("PID: %d\n", getpid());

	while(1)
	{
		signal(SIGUSR1, receiving_process);
		signal(SIGUSR2, receiving_process);
	}
	return (0);
}
