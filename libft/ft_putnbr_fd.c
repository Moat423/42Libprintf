/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 12:46:40 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/21 17:58:25 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Outputs the integer ’n’ to the given file
descriptor.
allowed funcitons: write
VARS
n: The integer to output.
fd: The file descriptor on which to write.
*/

#include "libft.h"

//convertes an int to unsigned and writes the minus in case of negative
int	ft_putnbr_fd(int n, int fd)
{
	unsigned int	pnum;
	int				count;

	count = 0;
	if (n < 0)
	{
		write(fd, "-", 1);
		pnum = (unsigned int) -n;
		count += 1;
	}
	else
		pnum = (unsigned int) n;
	ft_putunbr_fd(pnum, fd, &count);
	return (count);
}
