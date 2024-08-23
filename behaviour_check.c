/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   behaviour_check.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 11:33:08 by lmeubrin          #+#    #+#             */
/*   Updated: 2024/05/22 17:08:04 by lmeubrin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void	asciwalk(void);

int	main(void)
{
	char	*p;
	int		chars_written;
//	char	letter;
	void	*ptr;
	int		*p2;
	int		value;
	char	*str;

	p = "45";
	value = 1;
	ptr = NULL;
	p2 = &value;
	str = "Hello";
	chars_written = printf("8letters");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("%c\n", 'Y');
	printf("chars_written= %i\n", chars_written);
	printf("280: ");
	chars_written = printf("%c\n", 280);
	printf("chars_written= %i\n", chars_written);
	printf("a: ");
	chars_written = printf("%c\n", 'a');
	printf("chars_written= %i\n", chars_written);

	printf("a: ");
	chars_written = printf("%s\n", "a");
	printf("chars_written= %i\n", chars_written);
	printf("aalles gut: ");
	chars_written = printf("%s\n", "aalles gut");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("%s", "");
	printf("\n");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf(" %s", "");
	printf("\n");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("%s ", "");
	printf("\n");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf(" %s ", "");
	printf("\n");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf(" %s ", "-");
	printf("\n");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf(" %s %s ", "", "-");
	printf("\n");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf(" %s %s ", " - ", "");
	printf("\n");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf(" %s %s %s %s %s", " - ", "", "4", "", str);
	printf("\n");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	printf("\n");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf(" NULL %s NULL ", NULL);
	printf("\n");
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
	chars_written = printf(" %p %p ", LONG_MIN, LONG_MAX);
	printf("\n");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf(" %p %p ", INT_MIN, INT_MAX);
	printf("\n");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	printf("\n");
	printf("chars_written= %i\n", chars_written);

	printf("%%d\n");
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

	printf("triple percent in front of d\n");
	printf("%%%d", 45); //%%d data format not used, doesnt recognize d
	printf("chars_written= %i\n", chars_written);

	printf("OTHER CASES\n");
	chars_written = printf("just percent at the end: %");
	printf("\n");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("%5%");
	printf("\n");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf("w");
	printf("\n");
	printf("chars_written= %i\n", chars_written);
	chars_written = printf(" t after percent %t"); //%%d data format not used, doesnt recognize d
	printf("\n");
	printf("chars_written= %i\n", chars_written);
	printf("\n");
	//printf("%s %d %s %c %d", "hello", 34, 'c', 'c', 23, 23, "end");
	//asciwalk();
	return (0);
}

void	asciwalk(void)
{
	char	*s;
	int		i;

	s = malloc(4);
	i = 0;
	s[0] = '%';
	s[3] = '\0';
	s[1] = i;
	s[2] = 'Y';
	while (i < 128)
	{
		printf("Trying format specifier: %d (ASCII %c)\n", i, i);
		printf((const char *)s);
		printf("\n");
		i++;
	}
}
