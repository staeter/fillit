
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_validtetri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nraziano <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 12:36:01 by nraziano          #+#    #+#             */
/*   Updated: 2018/11/29 12:36:03 by nraziano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../fillit.h"

#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0')

int main(int argc, char const *argv[])
{
	char *str;
	tetri *dest;

	printf("Example of how to use BYTE_TO_BINARY: %c%c%c%c%c%c%c%c\n", BYTE_TO_BINARY(19));

	if (argc != 2)
		printf("%s\n", "Seulement un param possible");
	str = file_reader(argv[1]);
	if (!(dest = getvalid_tetri(&str, 'A')))
	{
		printf("%s\n", "getvalid_tetri returned false");
		free_tetri(&dest);
		return (0);
	}
	print_tetriing(dest,4);
	printf("%s\n", "YES WE DID IT");
	return 0;
}
