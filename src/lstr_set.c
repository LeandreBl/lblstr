/*
** EPITECH PROJECT, 2018
** lblstr
** File description:
** lstr_set
*/

#include <string.h>
#include <stdlib.h>

#include "lstr.h"

int lstr_set(lstr_t *lstr, const char *src, size_t len)
{
	if (lstr_resize(lstr, len + 1) == -1)
		return (-1);
	memcpy(lstr->i, src, len + 1);
	lstr->i[len] = 0;
	lstr->len = len;
	return (0);
}
