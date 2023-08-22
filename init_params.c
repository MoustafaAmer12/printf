#include "main.h"

/**
 * init_parameter - clears struct fields
 * @params: parametrs's struct
 * @ap: arg pointer
 * Return: void
 */

void init_parameter(params_t *params, va_list ap)
{
	params->unsign = 0;

	params->plus_flag = 0;
	params->space_falg = 0;
	params->hashtag_flag = 0;
	params->zero_flag = 0;
	params->minus_flag = 0;

	params->width = 0;
	params->percision = UNIT_MAX;

	params->h_modifier = 0;
	params->l_modifier = 0;
	(void)ap;
}
