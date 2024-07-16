/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diolivei <diolivei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 17:37:55 by diolivei          #+#    #+#             */
/*   Updated: 2024/07/16 19:00:03 by diolivei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int main()
{
	ft_printf("Welcome 42 Student!👋\n");
	ft_printf("PID: %d\n", getpid());
	while(1)
		pause();
	return (0);
}
