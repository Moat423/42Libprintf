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
//writes an unsinged int to a file descriptor
int	ft_putunbr_fd(unsigned int n, int fd, int *count)
{
	char		num_buff;

	if (n >= 10)
		ft_putunbr_fd(n / 10, fd, count);
	num_buff = n % 10 + '0';
	write(fd, &num_buff, 1);
	return (*count += 1);
}

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

/*
#include <stdio.h>

int main(void)
{
    int fd = STDOUT_FILENO; // You can use any valid file descriptor
    int written_chars;

    written_chars = ft_putnbr_fd(0, fd);
    printf("\nNumber of characters written: %d\n", written_chars);

    return 0;
}
*/
