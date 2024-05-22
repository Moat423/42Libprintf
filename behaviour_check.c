/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   behaviour_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:33:08 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/21 18:01:22 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int	main(void)
{
	char	*p;
	int		chars_written;
//	char	letter;
	void	*ptr;
	int		*p2;
	int		value;

	p = "45";
	value = 1;
	ptr = NULL;
	p2 = &value;
	chars_written = printf("%c\n", 'Y');
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("280 %c\n", 280);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("%c\n", 'a');
	printf("chars_written= %i\n", chars_written);

	chars_written = printf("%s\n", "a");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("%s\n", "aalles gut");
	printf("chars_written= %i\n", chars_written);

	printf("%%p\n");
	printf("p: ");
	chars_written = printf("%p\n", p);
	printf("chars_written= %i\n", chars_written);
	printf("&p: ");
	chars_written = printf("%p\n", &p);
	printf("chars_written= %i\n", chars_written);
	printf("ptr: ");
	chars_written = printf("%p\n", ptr);
	printf("chars_written= %i\n", chars_written);
	printf("p2: ");
	chars_written = printf("%p\n", p2);
	printf("chars_written= %i\n", chars_written);
	printf("&value: ");
	chars_written = printf("%p\n", &value);
	printf("chars_written= %i\n", chars_written);

	printf("%%d\n");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("d, 45: %d\n", *p);
	printf("chars_written= %i\n", chars_written);

	printf("%%i\n");
	chars_written = printf("10: %d\n", 10);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("-10: %d\n", -10);
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("%d\n", INT_MIN);
	printf("chars_written= %i\n", chars_written);

	printf("%%u\n");
	printf("45: ");
	chars_written = printf("%u\n", *p);
	printf("chars_written= %i\n", chars_written);
	printf("10: ");
	chars_written = printf("%u\n", 10);
	printf("chars_written= %i\n", chars_written);
	printf("-10: ");
	chars_written = printf("%u\n", -10);
	printf("chars_written= %i\n", chars_written);
	printf("INT_MIN: ");
	chars_written = printf("%u\n", INT_MIN);
	printf("chars_written= %i\n", chars_written);
	printf("INT_MAX: ");
	chars_written = printf("%u\n", INT_MAX);
	printf("chars_written= %i\n", chars_written);

	printf("%%x\n");
	printf("45: ");
	chars_written = printf("%x\n", *p);
	printf("chars_written= %i\n", chars_written);
	printf("10: ");
	chars_written = printf("%x\n", 10);
	printf("chars_written= %i\n", chars_written);
	printf("-10: ");
	chars_written = printf("%x\n", -10);
	printf("chars_written= %i\n", chars_written);
	printf("-10 as unsigned: ");
	chars_written = printf("%x\n", (unsigned int)-10);
	printf("chars_written= %i\n", chars_written);
	printf("INT_MIN: ");
	chars_written = printf("%x\n", INT_MIN);
	printf("chars_written= %i\n", chars_written);
	printf("INT_MAX: ");
	chars_written = printf("%x\n", INT_MAX);
	printf("chars_written= %i\n", chars_written);

	printf("%%x\n");
	printf("45: ");
	chars_written = printf("%X\n", *p);
	printf("chars_written= %i\n", chars_written);
	printf("10: ");
	chars_written = printf("%X\n", 10);
	printf("chars_written= %i\n", chars_written);
	printf("-10: ");
	chars_written = printf("%X\n", -10);
	printf("chars_written= %i\n", chars_written);
	printf("INT_MIN: ");
	chars_written = printf("%X\n", INT_MIN);
	printf("chars_written= %i\n", chars_written);
	printf("INT_MAX: ");
	chars_written = printf("%X\n", INT_MAX);
	printf("chars_written= %i\n", chars_written);

	printf("%%%d", 45); //%%d data format not used, doesnt recognize d
	printf("chars_written= %i\n", chars_written);

	printf(" t after percent %t"); //%%d data format not used, doesnt recognize d
	//printf("%s %d %s %c %d", "hello", 34, 'c', 'c', 23, 23, "end");
	return (0);
}
/*
char	*asciwalk(void)
{
	char	*s;
	char	*ptr;
	
	ptr = s;
	s = malloc(3);
	s[0] = '%';
	s[2] = '\0';
	s[1] = 0;
	while (s[1] < 127)
	{
		s[1]++;
		printf(s);
	}
	return (ptr);
}
*/
